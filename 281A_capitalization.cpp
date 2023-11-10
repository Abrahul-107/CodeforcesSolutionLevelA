#include<bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
#ifndef online_check
    freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
#endif
    fastread();
    string s;
    cin>>s;

    if(s[0]<='z' && s[0]>='a')
    {
        s[0] = s[0] - 32;
    }
    cout<<s;

    return 0;
}