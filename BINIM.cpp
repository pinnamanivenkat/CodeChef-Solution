#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        string start,stk;
        cin>>n>>start;
        ll ones=0,zeroes=0;
        while(n--) {
            cin>>stk;
            ll len = stk.length();
            if(stk[0]=='1') {
                for(ll i=0;i<len;i++) {
                    ones+=(stk[i]=='1');
                }
            } else {
                for(ll i=0;i<len;i++) {
                    zeroes+=(stk[i]=='0');
                }
            }
        }
        if (start == "Dee") {
            if(ones>=zeroes) {
                cout<<"Dum";
            } else {
                cout<<"Dee";
            }
        } else {
            if(zeroes>=ones) {
                cout<<"Dee";
            } else {
                cout<<"Dum";
            }
        }
        cout<<endl;
    }
}