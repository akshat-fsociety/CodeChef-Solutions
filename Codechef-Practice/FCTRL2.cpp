// Small factorials

#include <bits/stdc++.h>
using namespace std;
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;


cpp_int Factorial(int number)
{
    cpp_int num = 1;
    for (int i = 1; i <= number; i++)
        num = num * i;
    return num;
}


int main(){

    ios :: sync_with_stdio(false);  
    cin.tie(0);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        
        cpp_int f = Factorial(n);
        
        cout << f << endl;
    }
    return 0;
}