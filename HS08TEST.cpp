#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    float y;
    cin >> x >> y;
    if (x % 5 == 0 && x < (int)y)
        cout << setprecision(2) << fixed << y - x - 0.5;
    else
        cout << setprecision(2) << fixed << y;
}