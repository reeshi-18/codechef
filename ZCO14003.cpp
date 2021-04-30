#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,i,t;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long long int max=0;
	for(i=0;i<n;i++)
	{
		t=a[i]*(n-i);
		if(t>max)
		max=t;
	}
	cout<<max;
}
