/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--){
        ll p, q, r;
        cin >> p >> q >> r;
        ll a, b, c;
        cin >> a >> b >> c;

        int ans = 0;

        if ((p-a == q-b == r-c))
            cout << "1" << endl;
    }

    return 0;
}
