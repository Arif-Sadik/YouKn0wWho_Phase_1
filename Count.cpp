#include <bits/stdc++.h>
using namespace std;

int main() {
    long long c = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        c += s[i] - '0';  // Convert character to integer and add to sum
    }
    
    cout << c << endl;
    return 0;
}
