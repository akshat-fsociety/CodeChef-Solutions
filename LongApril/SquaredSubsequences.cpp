// Squared Subsequences
// TLE
#include <bits/stdc++.h>
using namespace std;

bool isTrigno(int n){
    if(n%4 == 0 || n%2 != 0)
        return true;
    else return false;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    for (int w = 0; w < T; w++)
    {
        long int N; cin >> N;

        long int a[100000];

        for (long int i = 0; i < N; i++){
            cin >> a[i];
        }
        
        int c = 0;
        for (long int i = 0; i < N; i++)
        {
            long int prod = 1;
            for (int j = i; j < N; j++)
            {
                prod *= a[j];
                if(isTrigno(prod)){
                    c++;
                }
            }
        }
        cout << c << endl;
    }
}