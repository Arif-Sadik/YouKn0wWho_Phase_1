#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;

bool is_inside(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

bool is_valid(char s[100][100], int i, int j)
{
    if (!is_inside(i, j)) return true;
    return s[i][j] == 'x';
}

int main()
{
    ll x, y;
    cin >> n >> m;
    char s[100][100];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> s[i][j];
        }
    }
    cin >> x >> y;
    x--;
    y--;

    if (is_valid(s, x - 1, y) && is_valid(s, x, y - 1) && is_valid(s, x + 1, y) && is_valid(s, x, y + 1) &&
            is_valid(s, x - 1, y - 1) && is_valid(s, x - 1, y + 1) && is_valid(s, x + 1, y - 1) && is_valid(s, x + 1, y + 1))
    {
        cout << "yes\n";
    }
    else
    {
        cout << "no\n";
    }

    return 0;
}
