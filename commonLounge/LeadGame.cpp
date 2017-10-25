#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int nRounds;
	cin>>nRounds;
	int maxLead=0,player,p1=0,p2=0;
	for (int i = 0; i < nRounds; ++i)
	{
		int pl1,pl2;
		cin>>pl1>>pl2;
		p1+=pl1;
		p2+=pl2;
		if ((p1>p2)&&((p1-p2)>maxLead))
		{
			maxLead=p1-p2;
			player=1;
		}
		else if((p2>p1)&&((p2-p1)>maxLead))
		{
			maxLead=p2-p1;
			player=2;
		}

	}
	cout<<player<<" "<<maxLead;
	return 0;
}