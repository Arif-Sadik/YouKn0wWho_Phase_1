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

    cout << length_s << ' ' << length_t << '\n';

    for (int i = 0; i < length_s; i++)
    {
        cout << s[i];
    }
    cout << ' ';
    for (int i = 0; i < length_t; i++)
    {
        cout << t[i];
    }
    cout << '\n';




    return 0;
}
