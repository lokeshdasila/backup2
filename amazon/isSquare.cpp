using namespace std;
#include <iostream>
#include <stdio.h>
struct point
{
	int x,y;
};

int distSq(point a,point b)
{
	return ((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main(int argc, char const *argv[])
{
	cout<<"Enter 4 coordinates :\n";
	point p1,p2,p3,p4;
	cin>>p1.x>>p1.y;
	cin>>p2.x>>p2.y;
	cin>>p3.x>>p3.y;
	cin>>p4.x>>p4.y;
	int x1=distSq(p1,p2);	
	int x2=distSq(p1,p3);
	int x3=distSq(p1,p4);
	if(x1==x2)
	{
		if ((2*x1)==x2)
		{
			if(distSq(p2,p4)==distSq(p3,p4))
				printf("Yes");
			else
				printf("No");
		}
		else
			printf("No");
	}
	else if(x2==x3)
	{
		if ((2*x2)==x1)
		{
			if(distSq(p2,p4)==distSq(p3,p2))
				printf("Yes");
			else
				printf("No");
		}
		else
			printf("No");
	}
	else if (x1==x3)
	{
		if ((2*x1)==x2)
		{
			if(distSq(p2,p3)==distSq(p3,p4))
				printf("Yes");
			else
				printf("No");
		}
		else
			printf("No");
	}
	else
		printf("No");

	return 0;
}