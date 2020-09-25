/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void check(ll n, ll k, ll l)
{
    if (k == 1)
    {
        if (n != 1)
        {
            cout << -1 << endl;
            return;
        }
    }
    else if (n > (k * l))
    {
        cout << -1 << endl;
        return;
    }
    ll p = 1;
    for (ll i = 0; i < n; i++)
    {
        cout << p << " ";
        p++;
        if (p > k)
            p = 1;
    }

    cout << "\n";
}

int main()
{

    ios ::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, l;
        cin >> n >> k >> l;

        check(n, k, l);
    }

    return 0;
}