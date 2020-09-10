// ATM

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double a,c;

    cin>>n;
    cin>>a;

    c=n+0.50;

    if((n%5==0)&&(a>c)) {
        cout << setprecision(2) << fixed << ((a-n) - 0.50);
    }
    else{
        cout << setprecision(2) << fixed << a;
    }
    return 0;
}
