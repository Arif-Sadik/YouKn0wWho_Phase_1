#include<bits/stdc++.h>
#define ll long long
#define dubb long double
#define pi acos(-1)
using namespace std;

int main()
{
    ll n,k,x, c=0, s=0, d=0, t=0;


        c=0, s=0, d=0;
        cin>>n;
        ll arr[n];
        ll mn=1e9;
        ll mx=-1e9;
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<n;i++)
        {
            if (arr[i]<mn)
            {
                mn=arr[i];
                c=i;

            }
            if (arr[i]>mx)
            {
                mx=arr[i];
                d=i;
            }
        }
        swap(arr[c],arr[d]);
        for (int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
return 0;
}

