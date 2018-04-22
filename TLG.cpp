#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll lead = 0, win = 0, sum1 = 0, sum2 = 0;
    while (n--)
    {
        ll player1, player2;
        cin >> player1 >> player2;
        sum1 += player1;
        sum2 += player2;
        ll diff = abs(sum1 - sum2);
        if (diff >= lead)
        {
            lead = diff;
            win = ((player1 > player2) ? 1 : 2);
        }
    }
    cout << win << " " << lead;
}