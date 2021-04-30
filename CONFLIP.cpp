#include<iostream>
using namespace std;
int main()
{
	int t,i,q,g;
	long long int n,j,k;
	cin>>t;
	while(t--)
	{
		cin>>g;
		while(g--)
		{
			cin>>i;
			cin>>n;
			cin>>q;
			if(n%2==0)
			{
				cout<<n/2<<endl;
			}
			else
			{
				if(q==i)
				{
					cout<<n/2<<endl;
				}
				else
				{
					cout<<(n/2)+1<<endl;
				}
			}
		}
	}
	return 0;
}
