// Chef and Remissness
/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int a, b;
        cin >> a >> b;
        (a>=b) ? cout << a << " " << a+b << endl  : cout << b << " " << a+b << endl;
    }
    
    return 0;
}