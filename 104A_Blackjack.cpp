#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef online_check
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);

// #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n;
    cin >> n;
    if (n <= 10 || n > 21)
    {
        cout << 0 << endl;
    }
    else if (n == 20)
    {
        cout << 15 << endl;
    }
    else
    {
        cout << 4 << endl;
    }
    return 0;
}