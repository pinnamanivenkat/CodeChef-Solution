#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define MAX 500

ll multiply(ll x, ll res[], ll res_size)
{
    ll carry = 0;
    for (ll i = 0; i < res_size; i++)
    {
        ll prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

void factorial(ll n)
{
    ll res[MAX];
    res[0] = 1;
    ll res_size = 1;
    for (ll x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);

    for (ll i = res_size - 1; i >= 0; i--)
        cout << res[i];
    cout << endl;
}
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, num;
    cin >> n;
    while (n--)
    {
        cin >> num;
        factorial(num);
    }
}