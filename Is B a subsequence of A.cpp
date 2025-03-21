#include<bits/stdc++.h>                          
#define ll long long
#define dubb long double
#define pi acos(-1)
using namespace std;

int main()
{
    ll n,k,x, c=0, s=0, d=0, t=0;

    cin>>n>>k;
    ll a[n], b[k];
    for (int i=0; i<n; i++)
    {
        cin >>a[i];
    }
    for (int i=0; i<k; i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+k);
    for (int i=0; i<k; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[j]==b[i])
            {
                c++;
                a[j]=0;
            }
        }
    }
    if (c==k)
    {
        cout<<"YES";
    }
    else cout<<"NO";



    return 0;
}
