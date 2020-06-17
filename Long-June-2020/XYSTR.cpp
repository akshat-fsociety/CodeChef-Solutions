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
        string s; 
        cin >> s;

        ll a[100000] = {0};
        memset(a, 0, 100000);
        // cout << "=====" << a[53] << "---";
        ll ans = 0;

        for (ll i = 0; i < s.length()-1; i++)
        {
            if((a[i]==0) && (a[i+1]==0))
            {
                if(s[i] != s[i+1])
                {
                    ans++;
                    a[i] = 1;
                    a[i+1] = 1;
                }
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}