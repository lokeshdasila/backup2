#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int nTestcase;
	cin>>nTestcase;
	for (int i = 0; i < nTestcase; ++i)
	{
		int nElephant,nCandy;
		cin>>nElephant>>nCandy;
		int sum=0,candyForEachElephant[nElephant];
		for (int i = 0; i < nElephant; ++i)
		{
			cin>>candyForEachElephant[i];
			sum+=candyForEachElephant[i];
		}
		if (sum>nCandy)
		{
			cout<<"No\n";
		}
		else
			cout<<"Yes\n";
	}
	return 0;
}