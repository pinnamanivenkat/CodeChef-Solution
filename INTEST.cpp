#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k, temp, count = 0;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        if (k != 0 && temp % k == 0)
        {
            count++;
        }
    }
    cout << count;
}