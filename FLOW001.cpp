#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, val;
        for (ll i = 0; i < 2; i++)
        {
            cin >> val;
            sum += val;
        }
        cout << sum << endl;
    }
}