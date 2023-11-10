/*A. Plus or Minus
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given three integers a
, b
, and c
 such that exactly one of these two equations is true:

a+b=c
a−b=c
Output + if the first equation is true, and - otherwise.
Input
The first line contains a single integer t
 (1≤t≤162
) — the number of test cases.

The description of each test case consists of three integers a
, b
, c
 (1≤a,b≤9
, −8≤c≤18
). The additional constraint on the input: it will be generated so that exactly one of the two equations will be true.

Output
For each test case, output either + or - on a new line, representing the correct equatio*/

#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (a + b == c)
        cout << "+\n";
    else if (a - b == c)
        cout << "-\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}