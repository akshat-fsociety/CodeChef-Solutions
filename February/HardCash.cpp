#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        long int N;
        long long int sum = 0;
        cin >> N;
        int A[1000005];
        long long int K;
        cin >> K;

        for (int j = 0; j < N; j++)
            cin >> A[j];

        for (int k = 0; k < N; k++)
            sum += A[k];
            
        int R;
        R = sum%K;
        cout << R << endl;
    }
    return 0;
}