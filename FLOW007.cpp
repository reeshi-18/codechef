#include <iostream>
using namespace std;

int main() 
{
    int t;
    long int n,r;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        r=0;
        while(n!=0)
        {
            r=r*10 + n%10;
            n=n/10;
        }
        cout<<r<<endl;
    }
	return 0;
}

