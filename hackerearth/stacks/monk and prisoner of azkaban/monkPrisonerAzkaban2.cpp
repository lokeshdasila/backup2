#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int arrayLength;
	cin>>arrayLength;
	pair<int,int> arr[arrayLength];
	for (int i = 0; i < arrayLength; ++i)
	{
		cin>>arr[i].first,arr[i].second=i;
	}
	stack<pair<int,int>> s;
	s.push(arr[0]);
	int aMax[arrayLength]={-1};
	pair<int,int> next;
	for (int i = 1; i < arrayLength; ++i)
	{
		next=arr[i];
		if (next.first>s.top().first)
		{
			aMax[s.top().second]=next.second+1;
			s.pop();
		}
		while(!(s.empty())&&(next.first>s.top().first))
		{
			aMax[s.top().second]=next.second+1;
			s.pop();
		}
		s.push(next);
	}
	while(!(s.empty()))
	{
		aMax[s.top().second]=-1;
	}
	int aMin[arrayLength]={-1};
	s.push(arr[arrayLength-1]);
	for (int i = arrayLength-2; i >= 0; ++i)
	{
		next=arr[i];
		if (next.first>s.top().first)
		{
			aMax[s.top().second]=next.second+1;
			s.pop();
		}
		while(!(s.empty())&&(next.first>s.top().first))
		{
			aMax[s.top().second]=next.second+1;
			s.pop();
		}
		s.push(next);
	}
	while(!(s.empty()))
	{
		aMin[s.top().second]=-1;
	}
	for (int i = 0; i < arrayLength; ++i)
	{
		cout<<(aMax[i]+aMin[i])<<" ";
	}
	return 0;
}