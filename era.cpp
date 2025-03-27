#include<bits/stdc++.h>                          /// cpp + ctrl+j
#define ll long long
#define dubb long double
#define pi acos(-1)
using namespace std;

int main()
{
    ll n,k,x, c=0, s=0, d=0, t=0;
    cin>>t;
    while(t--)
    {

        c=0, s=0, d=0;
        cin>>n;
        ll a[n + 1], s = 0;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] > i + s)
            {
                s += a[i] - (i + s);
            }
        }
        cout << s << "\n";


    }

return 0;
}
