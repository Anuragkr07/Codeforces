#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c=0;
    int k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int m=a[k-1];
    for(int i=0;i<n;i++)
    {
        if(a[i]>0 && a[i]>=m)
        c++;
    }
    
    cout<<c;
    return 0;
}