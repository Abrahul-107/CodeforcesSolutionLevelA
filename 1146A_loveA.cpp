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
    string s;
    cin >> s;
    int c = 0;
    int leng = s.length();

    for (int i = 0; i < leng; i++)
    {
        if (s[i] == 'a')
            c++;
    }

    cout << min(leng, 2 * c - 1) << endl;

    return 0;
}