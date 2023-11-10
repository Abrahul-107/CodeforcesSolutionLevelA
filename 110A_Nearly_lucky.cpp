#include<iostream>
using namespace std;
#define ll long long int


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    bool flag = false;
    ll n;
    cin>>n;
    int countOfLuckyDigits = 0;
    while(n!=0)
    {
        ll lastDigit = n % 10;

        if (lastDigit == 4 or lastDigit == 7)
            countOfLuckyDigits++;
        n /= 10;
    }
    if(countOfLuckyDigits==4 || countOfLuckyDigits==7)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;

}