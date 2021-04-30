#include<iostream>
using namespace std;

#define ll long long

ll Bsearch(ll size, ll a[], ll b)
{
    ll lower=0, upper=size-1;
    ll ans=-1;
    while(lower<=upper)
    {
        ll mid=(lower+upper)/2;

        if(a[mid]>b)
        {
            ans=mid;
            upper=mid-1;
        }
        else
        {
            lower= mid+1;
        }

    }

    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ll arr[n];
        arr[0]=a[0];
        ll size=1;
        for(ll i=1;i<n;i++)
        {
            ll index = Bsearch(size,arr,a[i]);
            if(index==-1)
            {
            	size++;
            	arr[size-1]=a[i];
			}
			else
			arr[index]=a[i];
        }
        
        
        cout<<size<<" ";

        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;   
	}
}
