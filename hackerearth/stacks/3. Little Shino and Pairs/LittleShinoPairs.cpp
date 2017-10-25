#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c[n];
    
    for(int i=0;i<n;i++)
    cin>>c[i];
    int count=0;
   // int test[n]={0};
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        int max=0;
        for(int j=(i+1);j<n;j++)
        {
            if(c[i]<c[j])
            flag++;
            if(flag==2)
            break;
            if(max<c[j])
            {
                max=c[j];
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
// Tester approach     O(n*log n)
/*

#include <bits/stdc++.h>
using namespace std;
int N;
pair<int, int> A[100000];
int main()
{
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", &A[i].first), A[i].second=i;
    sort(A, A+N, greater<pair<int, int>>());
    int a=A[0].second, b=A[0].second;
    int ans=0;
    for(int i=1; i<N; i++)
    {
        int x=A[i].second;
        if(x<a || x>b)
            ans++;
        else
            ans+=2;
        a=min(a, x);
        b=max(b, x);
    }
    printf("%d\n", ans);
    return 0;
}

*/