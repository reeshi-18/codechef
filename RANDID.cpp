#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    long int n,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        double r= q*(n+q+1)/(double)(q+1);
        cout<<setprecision(10)<<r<<endl;
    }
}
