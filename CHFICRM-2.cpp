/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    int fives = 0, tens = 0;
    int k;


    while(t--){
        int n;
        cin >> n;
        
        int flag = 1;
        
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            if(k == 5){
                fives++;
            }

            else if(k == 10 ){
                if(fives > 0){
                    fives--;
                    tens++;
                }
                else {
                    flag = 0;
                    break;
                }
            }

            else if(k == 15){
                if(fives > 2){
                    fives -=2;
                } else if(tens > 1){
                    tens -=1;
                } else{
                    flag = 0;
                    break;
                }
            }

        }
        if(flag == 1)
            cout << "YES" << endl;
        if(flag == 0)
            cout << "NO" << endl;   
    }

    return 0;
}