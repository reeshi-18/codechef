#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int main()
{
	int a[60];
	a[0]=0;
	a[1]=1;
	for(int i=2;i<60;i++)
	{
		a[i]=(a[i-1]+a[i-2])%10;
	}
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		
		int pos=0;
		while(n>>=1) 
		++pos;
		
		n= ((ll)pow(2,pos)-1)%60;
		cout<<a[n]<<endl;
	}
		
}
