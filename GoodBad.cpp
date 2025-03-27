#include<iostream>
#include <string.h>
using namespace std;

const int N = 1e5 + 9;
char s[N];
int main() {
  int test_cases; cin >> test_cases;
  while (test_cases--) {
    cin >> s;
    int len = strlen(s);
    bool is_good = false;
    for (int i = 0; i < len; i++) 
    {
      if (i + 2 < len and s[i] == '0' and s[i + 1] == '1' and s[i + 2] == '0') {
        is_good = true;
      }

      if (i + 2 < len and s[i] == '1' and s[i + 1] == '0' and s[i + 2] == '1') {
        is_good = true;
      }
    }
    if (is_good) {
      cout << "Good\n";
    }
    else {
      cout << "Bad\n";
    }
  }
  return 0;
}
