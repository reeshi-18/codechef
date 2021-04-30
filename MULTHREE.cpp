#include<iostream>
using namespace std;
int main()
{
	long long int k;
	int t,d0,d1;
	
	cin>>t;
	while(t--)
	{
		cin>>k>>d0>>d1;
		int s=d0+d1;
		
		long long int ans = s;
		long long int sum= (2*s)%10 + (4*s)%10 + (8*s)%10 + (6*s)%10;
		
		k-=2;
		
		if(k>0)
		{
			ans+=(s%10);
			k--;
		}
		
		ans+= sum*(k/4);
		k=k%4;
		
		int p=2;
		
		
		while(k--)
		{
			ans+=(p*s)%10;
			p=(p*2)%10;			
		}
		
		if((ans%3)==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;		
	}
	
	return 0;
}
