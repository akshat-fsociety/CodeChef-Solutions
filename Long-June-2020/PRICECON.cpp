/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    ll T;
    cin >> T;

    while(T--){
        ll n, k;
        cin >> n >> k;

        vector<ll> v;
        ll num;

        for (ll i = 0; i < n; i++){
            cin >> num;
            v.push_back(num);
        }
        ll sell = 0;
        ll loss = 0;
        for (ll i = 0; i < n; i++){
            sell += v[i];

            if(v[i] > k) loss += k;
            else loss += v[i];
        }
        
        cout << sell-loss << endl;
        
    }

    return 0;
}