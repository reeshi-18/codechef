#include<iostream>
using namespace std;
int main()
{
	int t,l,b;
	cin>>t;
	while(t--)
	{
		cin>>l>>b;
		int h=0;
		for(int i=b; i>=1; i--)
		{
			if((l%i==0) && (b%i==0))
			{
				h=i;
				break;
			}
			
		}
		cout<<h<<endl;
	}
}
