#include<bits/stdc++.h>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
// #ifndef online_check
//     freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
// #endif
    fastread();
    int n,k;
    cin>>n;
    cin>>k;
    int c = k;

    for(int i =1;i<=k;i++)
    {
        if(n%10==0)
        {
            n = n/10;
        }
        else
        {
            n = n-1;
        }
    }
    cout<<n;
    

    return 0;
}