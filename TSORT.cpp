#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, i;
    cin >> n;
    vector<ll> temp(n);
    for (i = 0; i < n; i++)
    {
        cin >> temp[i];
    }
    sort(temp.begin(), temp.end());
    for (i = 0; i < n; i++)
    {
        cout << temp[i] << endl;
    }
}