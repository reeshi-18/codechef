#include<iostream>
using namespace std;
int main()
{
    int t,i,j,z;
    cin>>t;
    long int n;
    for(i=0;i<t;i++)
    {
        cin>>n;
        z=0;
        for(j=5;n/j>=1;j*=5)
        {
            z=z+n/j;
        }
        cout<<z<<endl;;
    }
}
