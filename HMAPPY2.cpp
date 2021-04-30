#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b)
{
	if(a==0)
	return b;
	
	return gcd(b%a,a);
}

int main()
{
	int t;
	long long int k,n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b>>k;
		if(a>b)
		{
			long long int tmp=a;
			a=b;
			b=tmp;
		}
		
		long long int i,l;
		
		l= (a*b)/gcd(a,b);
		
		long long x= n/a;
		long long y= n/b;
		long long z= 2*(n/l);
		
		if((x+y-z)>=k)
		cout<<"Win"<<endl;
		else
		cout<<"Lose"<<endl;		
	}
	return 0;
}
