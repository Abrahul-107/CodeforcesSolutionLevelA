#include <iostream>
using namespace std;

int main() {
/*#ifndef online_check
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

#endif*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int num256=min(k2,min(k6,k5));
    int rest2=k2-num256;

    int num32=min(rest2,k3);
    unsigned long long answer=256*num256+32*num32;
    cout<<answer<<"\n";
    return 0;
}