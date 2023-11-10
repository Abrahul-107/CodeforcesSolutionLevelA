#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    // #ifndef online_check
    //     freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    fastread();
    int i, n, t, k, w;
    long long sum = 0;

    cin >> k >> n >> w;
    for (i = 1; i <= w; i++)
    {
        sum = sum + (i * k);
    }
    if (sum <= n)
    {
        cout << 0 << "\n";
    }
    else
        cout << sum - n << "\n";

    return 0;
}