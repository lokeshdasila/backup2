#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int nCoins;
	queue<int> harryBag;
	cin>>nCoins;
	for (int i = 0; i < nCoins; ++i)
	{
		int cValue;
		cin>>cValue;
		harryBag.push(cValue);
	//	cout<<"yo";
	}
//	cout<<"yo";
	int nInstructions,X;
	cin>>nInstructions>>X;
	stack<int> monkBag;
	int i=0,sum=0;
	int c=0,yo=-1;
	while(c<nInstructions)
	{
		string ins;
		cin>>ins;
		c++;
		if(ins=="Harry")
		{
			monkBag.push(harryBag.front());
			harryBag.pop();
			sum+=monkBag.top();
			i++;
		}
		else
		{
			sum-=monkBag.top();
			monkBag.pop();
			i--;
		}
		if (sum==X)

		{
			yo=i;
		}
	}
	cout<<yo;
	return 0;
}