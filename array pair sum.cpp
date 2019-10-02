#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,i,j,s,t,z,mi=0,x=0,y=0;
int a[1000],b[1000];
cin>>t;
for(z=0;z<t;z++)
{cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
cin>>s;
for(i=0;i<n-1;i++)
{

for(j=i+1;j<=n-1;j++)
{x=0;
mi=i-j;
b[i]=mi;
if(a[i]+a[j]==s)
{x=1;
    }
    }
    }
if(x==1)
{for(i=0;i<n-1;i++)
{
for(j=i+1;j<=n-1;j++)
{
cout<<"Deepak should buy roses whose prices are"<<a[i]<<" and "<<a[j]<<endl<<endl;
}
}
}
}
return 0;
}
