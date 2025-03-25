#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[1000], t[1000];
    cin >> s >> t;

    int length_s = strlen(s);
    int length_t = strlen(t);

    cout << length_s << " " << length_t << endl;

    char concat_s[2000];  
    strcpy(concat_s, s);  
    cout << strcat(concat_s, t) << endl;

    swap(s[0], t[0]);
    cout << s << " " << t << endl;

    return 0;
}
