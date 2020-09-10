// Sum of Digits
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        long long int n;
        cin >> n;

        int a, b = 0;
        while(n>0){
            a = n%10;
            b += a;
            n /= 10;
        }

        cout << b << "\n";
    }
    return 0;
}