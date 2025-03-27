#include<iostream>
#include <string.h>
using namespace std;

const int N = 55;
char s[N], t[N];
int main() {
  int test_cases; cin >> test_cases;
  while (test_cases--) {
    cin >> s >> t;
    int len_s = strlen(s);
    int len_t = strlen(t);
    for (int i = 0; i < max(len_s, len_t); i++) {
      if (i < len_s) {
        cout << s[i];
      }
      if (i < len_t) {
        cout << t[i];
      }
    }
    cout << '\n';
  }
  return 0;
}
