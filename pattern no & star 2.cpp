#include<iostream>
using namespace std;
int main()
{
int i,j,n,s;
cin>>n;
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
{cout<<j;}
for(s=0;s<n-i;s++)
{cout<<"*";}
cout<<endl;}




return 0;}
