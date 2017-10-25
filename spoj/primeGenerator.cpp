#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int x)
{
	if (x<=1)
	{
		return false;
	}
	//int flag=0;
	if (x==2)
	{
		return true;
	}
	if ((x%2)==0)
		return false;
	
	for (int i = 3; i <= sqrt(x); i+=2)
	{
		if ((x%i)==0)
		{
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int nTestcase;
	cin>>nTestcase;
	for (int i = 0; i < nTestcase; ++i)
	{
		int small,large;
		cin>>small>>large;
		for (int i = small; i <= large; ++i)
		{
			if (isPrime(i))
			{
				cout<<i<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}