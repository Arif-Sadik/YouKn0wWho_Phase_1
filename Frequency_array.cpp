#include<bits/stdc++.h>
#define ll long long
#define dubb long double
#define pi acos(-1)
using namespace std;

int main()
{
    ll n,k,x, c=0, s=0, d=0, t=0;

    cin>>n>>k;
    ll a[n+1], b[k+1];
    for (int i=1; i<=n; i++)
    {
        cin >>a[i];
    }
    for (int i=1; i<=k; i++)
    {
        b[i]=0;
    }


    for (int i=1;i<=n;i++)
    {
        b[a[i]]++;
    }
    for (int i=1;i<=k;i++)
    {
        cout<<b[i]<<endl;
    }



    return 0;
}
