/*A. Short Sort
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are three cards with letters a
, b
, c
 placed in a row in some order. You can do the following operation at most once:

Pick two cards, and swap them.
Is it possible that the row becomes abc
 after the operation? Output "YES" if it is possible, and "NO" otherwise.
Input
The first line contains a single integer t
 (1≤t≤6
) — the number of test cases.

The only line of each test case contains a single string consisting of each of the three characters a, b, and c
exactly once, representing the cards.

Output
For each test case, output "YES" if you can make the row abc
with at most one operation, or "NO" otherwise.

You can output the answer in any case 
(for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
6
abc
acb
bac
bca
cab
cba
outputCopy
YES
YES
YES
NO
NO
YES*/
#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX = 200007;
const int MOD = 1000000007;
 
string alph = "abc";
 
void solve() {
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		cnt += (s[i] != alph[i]);
        //cout<<cnt; for understanding the logic 
	}
	cout << (cnt <= 2 ? "YES\n" : "NO\n");
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; 
    cin >> tt; 
    for (int i = 1; i <= tt; i++) 
        solve();
	
}
