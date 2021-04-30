#include<iostream>
using namespace std;
int main()
{
	int t,i,n,j,c;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		int a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		c=1;
		for(j=1;j<n;j++)
		{
			if(a[j]<a[j-1])
			c++;
			else
			a[j]=a[j-1];		
		}
		cout<<c<<endl;
	}
}
