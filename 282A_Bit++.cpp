#include <bits/stdc++.h>
using namespace std;

int main()
{
    // #ifndef online_check
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);

    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    int x = 0;

    while (n--)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }
    cout << x << endl;

    return 0;
}