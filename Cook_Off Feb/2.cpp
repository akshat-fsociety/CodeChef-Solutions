#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        long long int N, R;
        cin >> N;
        R = 0;
        if(N <= 250000)
        {
            R = N;
            cout << R << endl;
        }
        else if(N > 250000 && N <= 500000)
        {
            R = N - ((N - 250000)*0.05);
            cout << R << endl;
        }
        else if(N > 500000 && N <= 750000)
        {
            R = N - 12500 - ((N - 500000)*0.10);
            cout << R << endl;
        }
        else if(N > 750000 && N <= 1000000)
        {
            R = N - 37500 - ((N - 750000)*0.15);
            cout << R << endl;
        }
        else if(N > 1000000 && N <= 1250000)
        {
            R = N - 75000 - ((N - 1000000)*0.20);
            cout << R << endl;
        }
        else if (N > 1250000 && N <= 1500000)
        {
            R = N - 125000 - ((N - 1250000)*0.25);
            cout << R << endl;
        }
        else if (N > 1500000)
        {
            R = N - 187500 - ((N - 1500000)*0.30);
            cout << R << endl;
        }
        
    }
    return 0;
}
