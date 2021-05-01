#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        ll a, b;
        int c=0;
        ll ans = -1;
        for (int i = sqrt(n); i>=1; i--) 
	{
            if (n % i == 0 && i!=(n/i))
		{
                a = (n/i + i)/2;
                b = (n/i - i)/2;
                if (b*b + n == a*a) 
		{
                    c=1;
                    ans=b;
                    break;
                }
            }
        }
        if(c) 
	{
            ans = ans * ans;
        }
        cout << ans << endl;
    }
    return 0;
}
