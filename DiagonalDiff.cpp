#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n + 1][n + 1];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }

  int primary_diagonal_sum = 0;
  for (int i = 1; i <= n; i++) {
    primary_diagonal_sum += a[i][i];
  }

  int secondary_diagonal_sum = 0;
 
  for (int i = 1; i <= n; i++) {
    secondary_diagonal_sum += a[i][n - i + 1];
  }

  cout << abs(primary_diagonal_sum - secondary_diagonal_sum) << '\n';
  return 0;
}
