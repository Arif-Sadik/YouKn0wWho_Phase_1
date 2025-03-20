#include<bits/stdc++.h>                         
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
        ll arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<n;i++)
        {
            for(int j=i; j<n; j++)
            {
                ll mx=-1e9;
                for(int l=i; l<=j; l++)
                {
                    mx=max(mx,arr[l]);
                }
                cout<<mx<<" ";
            }
        }
        cout<<endl;


    }

return 0;
}

