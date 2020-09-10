// Sell All the Cars
// Sell All the Cars

#include <bits/stdc++.h>
using namespace std;


int main(){

    // ios :: sync_with_stdio(false);
    // cin.tie(0);

    int T; cin >> T;
    for (int w = 0; w < T; w++)
    {
        long int n;
        cin >> n;

        long int P[100000];
        for (long int i = 0; i < n; i++) {
            cin >> P[i];
        }

        long long int f = 0;
        long long int l = 1;

        sort(P, P+n, greater<int>());

        // for (int i = 0; i < n; i++)
        // {
        //     cout << P[i]  << " ";
        // }
        
        
        for (long int i = 0; i < n; i++) { 
            if(P[i] <=0) break;

            f = (f+P[i]) % 1000000007;
            P[i+1] -= l;
            l++;
        }
        cout << f << endl;
    }
    return 0;
}
