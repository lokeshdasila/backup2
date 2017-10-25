#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	//int arr[n];
	int arr[n];
	//int x=-1,y=-1;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		int x=-1,y=-1,flag=0;
		for (int j = 0; j < n; ++j)
		{
			if(arr[i]<arr[j])
			{
				if (i>j)
				{
					x=j+1;
				}
				else if(flag==0)
				{
					y=j+1;
					flag++;
					break;
				}
			}
		}
		cout<<(x+y)<<" ";
	}
	return 0;
}
/*
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	//int arr[n];
	pair<int,int> arr[n],res[n];
	int x=-1,y=-1;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i].first,arr[i].second=i;
	}
	sort(arr,arr+n,greater<pair<int,int>>());
	res[0].first=-2,res[0].second=arr[0].second;
	for (int i = 1; i < n; ++i)
	{
		res[i].first=x+y,res[i].second=arr[i].second;
		if(i!=(n-1))
		{
			if (arr[i].second<arr[i+1].second)
			{
				
			}
		}

	}
	return 0;
}*/