#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int lim,bob;
    cin>>lim>>bob;
    int c = 0;

    for(int i=1;i<INT_MAX;i++)
    {
        lim = lim*3;
        bob = bob*2;
        c++;
        if(lim>bob)
        {
            break;
            
        }

    }
    cout<<c;

    return 0;
}