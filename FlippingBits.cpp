#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        unsigned int x;
        cin >> x;
        unsigned int ans = 0;
        for (int k = 0; k < 32; k++)
        {
            if ((x >> k) & 1)
            {
            }
            else
            {
                ans += 1 << k;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
