#include<bits/stdc++.h>                          /// cpp + ctrl+j
#define ll long long
#define dubb long double
#define pi acos(-1)
using namespace std;

int main()
{
    ll n,k,x, c=0, s=0, d=0, t=0;

        cin>>n;
        ll a[n], b[n];
        for (int i=0;i<n;i++)
        {
            cin >>a[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for (int i=0;i<n;i++)
        {
            if (a[i]!=b[i])
            {
                cout<<"no";
                return 0;
            }
        }
        cout<<"yes";




return 0;
}
