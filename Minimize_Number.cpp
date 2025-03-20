#include<bits/stdc++.h>                         
#define ll long long
#define dubb long double
#define pi acos(-1)
using namespace std;

bool isEven(ll arr[], ll n)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i]%2!=0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    ll n,k,x, c=0, s=0, d=0, t=0;


    cin>>n;
    ll arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    while (isEven(arr,n))
    {
        s++;
        for (int i=0; i<n; i++)
        {
            arr[i]=arr[i]/2;
        }
    }
    cout<<s;

    return 0;
}
