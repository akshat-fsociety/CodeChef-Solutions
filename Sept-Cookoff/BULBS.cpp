/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ios ::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        ll size = s.length();

        ll connected = 0;
        // ll ones = 0;

        for (ll i = 0; i < size; i++)
        {
            // ones++;
            if (s[i] == '1')
            {
                if (i == 0 || i == size - 1)
                    connected += 1;
                else
                    connected += 2;
            }
        }
        if ((connected - k) > 0)
            cout << connected - k << endl;
        else
            cout << 0 << endl;

        return 0;
    }
}
