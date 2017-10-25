// tester approach
#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int b[200005];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	stack<int>s;
	int result=0;
	s.push(0);
	for(int i=1;i<=n;i++)
	{
		if(b[i]>0)s.push(i);
		else
		{
			int index=s.top();
			s.pop();
			if(b[index]==-b[i])
			{
				if(!s.empty())
					result=max(result,i-s.top());
				else
					s.push(i);
			}
			else s.push(i);
		}
	}
	cout<<result<<"\n";
	return 0;
	return 0;
}