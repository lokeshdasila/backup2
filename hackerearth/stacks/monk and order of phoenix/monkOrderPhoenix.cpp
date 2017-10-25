#include <iostream>
#include <stack>
using namespace std;

int searchMin(stack<int> s)
{
	int min=100001;
	while(!s.empty())
	{
		if (s.top()<min)
		{
			min=s.top();
		}
		s.pop();
	}
	return min;
}

bool destructionPossible(int *arr,int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		if(arr[i]>arr[i+1])
			return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int nRows;
	cin>>nRows;
	stack<int> heightStack[nRows];
	int minElement[nRows];
	for (int i = 0; i < nRows; ++i)
	{
		int nElements;
		cin>>nElements;
		minElement[i]=100001;
		for (int j = 0; j < nElements; ++j)
		{
			int curr;
			cin>>curr;
			heightStack[i].push(curr);			// pushing the height of fighter in stack
			if (minElement[i]>curr)
			{
				minElement[i]=curr;
			}
		}
	}

	int nQueries;
	cin>>nQueries;

	for (int i = 0; i < nQueries; ++i)
	{
		int qType;
		cin>>qType;
		if (qType==0)
		{
			int row;
			cin>>row;
			if (heightStack[row-1].top()==minElement[row-1])
			{
				minElement[row-1]=searchMin(heightStack[row-1]);
			}
			if (!(heightStack[row-1].empty()))
			{
				heightStack[row-1].pop();
			}
			
		}
		else if (qType==1)
		{
			int row,h;
			cin>>row>>h;
			if (h<minElement[row-1])
			{
				minElement[row-1]=h;
			}
			heightStack[row-1].push(h);
		}
		else if(qType==2)
		{
			if (destructionPossible(minElement,nRows))
			{
				cout<<"YES\n";
			}
			else 
				cout<<"NO\n";
		}
	}
	return 0;
}