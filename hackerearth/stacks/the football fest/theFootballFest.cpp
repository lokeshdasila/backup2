#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int nTestcase;
	cin>>nTestcase;
	for (int i = 0; i < nTestcase; ++i)
	{
		int nPass,firstID;

		cin>>nPass>>firstID;
		stack<int> s;
		s.push(firstID);
		for (int i = 0; i < nPass; ++i)
		{
			char passType;
			cin>>passType;
			if(passType=='P')
			{
				int nextID;
				cin>>nextID;
				s.push(nextID);
			}
			else
			{
				int x=s.top();
				s.pop();
				int y=s.top();
				s.pop();
				s.push(x);
				s.push(y);
			}
		}
		cout<<"Player "<<s.top()<<endl;
	}
	return 0;
}