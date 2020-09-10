//  COVID Pandemic and Long Queue Problem Code: COVIDLQ\

// COVID Pandemic and Long Queue

#include <bits/stdc++.h>
using namespace std;

void COVID(int* a, int n){


    for (int i = 0; i < n; i++)
    {
        int k = a[i];
        if(k == 1){
            for (int j = i+1; j < i+6 && j<n; j++)
            {
                if(a[j] == 1){
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
    return;
}

int main(){
    
    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    for (int q = 0; q < T; q++)
    {
        int n; cin >> n;

        int* a = NULL;
        a = new int[n];

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        // if(n>5)
        COVID(a, n);
        // else cout << "NO" << endl;
    }
    return 0;

}