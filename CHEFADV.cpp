#include<iostream>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,x,y;
		cin>>n>>m>>x>>y;
		
		ll c= (n-1)%x;
		ll d= (m-1)%y;
		
		if(c==0 && d==0)
		{
			cout<<"Chefirnemo"<<endl;
		}
		else
		if(n>=2 && m>=2)
		{
			ll a= (n-2)%x;
			ll b= (m-2)%y;
			if(a==0 && b==0)
			{
				cout<<"Chefirnemo"<<endl;
			}
			else
			{
				cout<<"Pofik"<<endl;
			}	
		}
		else
		{
			cout<<"Pofik"<<endl;
		}
	}
		
}
