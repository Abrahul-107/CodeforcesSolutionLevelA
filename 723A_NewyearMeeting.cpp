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
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    int summ = abs(arr[1]-arr[0]) + abs(arr[1]-arr[2]);
    cout<<summ;

    

    return 0;
}