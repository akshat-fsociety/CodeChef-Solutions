/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int tellMe()
{
    int n;
    cin >> n;
        
    int k;
    int fives = 0, tens = 0;

    cout << "This is input";

    for (int i = 0; i < n; i++){
        cin >> k;

        if (k == 10 && fives > 0)
        {
            // He can sell
            fives--;
            tens++;
        }
        else if(k == 15 && tens > 0)
        {
            // He can sell
            tens--;
        }
        else if (k == 5)
        {
            // He can sell
            fives++;
        }
        else 
        {
            // He cannot sell
            return 0;
        }
    }
    return 1;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        if(tellMe())
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}