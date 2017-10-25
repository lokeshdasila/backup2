#include <iostream>
#include <stack>
using namespace std;

void calculateRange(int nTower,int *towerHeight,int * towerRange)
{
	towerRange[0]=1;
	stack<int> s;
	s.push(0);
	for (int i = 1; i < nTower; ++i)
	{
		 // pop the elements till stack is empty or the height greater than ith element is found
		while(!(s.empty())&&(towerHeight[s.top()]<=towerHeight[i]))  
			s.pop();
		towerRange[i]=(s.empty())?(i+1):(i-s.top());
		s.push(i);
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int nTestcase;
	cin>>nTestcase;
	for (int i = 0; i < nTestcase; ++i)
	{
		int nTower;
		cin>>nTower;
		int towerHeight[nTower];
		for (int i = 0; i < nTower; ++i)
		{
			cin>>towerHeight[i];
		}
		int towerRange[nTower];
		calculateRange(nTower,towerHeight,towerRange);
		for (int i = 0; i < nTower; ++i)
		{
			cout<<towerRange[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}