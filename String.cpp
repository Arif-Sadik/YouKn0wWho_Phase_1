#include<bits/stdc++.h>                          /// cpp + ctrl+j
#define ll long long
#define dubb long double
#define pi acos(-1)
using namespace std;
const ll N=1000;
char s[N], t[N];

int main()
{
    cin >> s >> t;
    int length_s = strlen(s);
    int length_t = strlen(t);
    char p[1000];
    for (int i=0;s[i]!='\0';i++)
    {
        p[i]=s[i];
    }
    cout<<length_s<<" "<<length_t<<endl;
    cout<<strcat(p,t)<<endl;
    swap(s[0],t[0]);
    cout<<s<<" "<<t<<endl;


    return 0;
}
