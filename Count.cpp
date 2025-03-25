#include<bits/stdc++.h>
#define ll long long
#define dubb long double
#define pi acos(-1)
using namespace std;

int main()
{

    ll c=0;
    char s[1000];

        cin>>s;
        for (int i=0;i<strlen(s);i++)
        {
            c+=s[i]-'0';
        }
        cout<<c;




return 0;
}
