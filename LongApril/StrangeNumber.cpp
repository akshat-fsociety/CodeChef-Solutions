#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}

int NumberOfFactor(int n){
    int c = 0;
    int k = sqrt(n)  ;
    for (int i = 1; i <= k; i++){
        if(n%i == 0){
            if(i != k)  c+=2;
            else c+=1;
        }
    }
    return c+1;
}

int NumberOfPrimeFactor(int n){
    int c = 0;
    // int k = sqrt(n);
    for (int i = 1; i <= n; i++){
        if(n%i == 0){
            if(isPrime(i)){
                c++;
            }
        }
    }
    return c;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    for (int w = 0; w < T; w++){
        int K, X;
        cin >> X >> K;

        // Let us calculate for rage 1 to 10000
        // X -> Number of Factors
        // K -> Number of Prime Factors

        int ans = 0;

        for (int i = 2; i <= 1000; i++){
            if(NumberOfFactor(i) == X){
                if(NumberOfPrimeFactor(i) == K){
                    // cout << i << endl;
                    ans = 1;
                    break;
                }
            }
        }
        if(ans != 1)
        cout << "0" << endl;
            else cout << ans << endl;
    }
    return 0;
}
