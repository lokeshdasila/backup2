#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int arrayLength;
	cin>>arrayLength;
	stack<int> s;
	int numMax=0,count=0;
	for(int i=0;i<arrayLength;++i)
	{
		int curr;
		cin>>curr;

		if ((s.empty())||(curr>0))
			s.push(curr);
		else if (s.top()==-(curr))
		{
			count+=2;
			s.pop();
		}
		else
		{
			count=0;
			while(!(s.empty()))
				s.pop();
		}
		if (count>numMax)
		{
			numMax=count;
		}
	}
	cout<<numMax;
	return 0;
}