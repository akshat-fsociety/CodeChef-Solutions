// Not Correct
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        long int N; 
        int K;
        cin >> N;
        cin >> K;
        
        int A[N+1];
        int B[N+1];

        for (long int j = 0; j < N; j++){
            cin >> A[j];
        }
        int max_length = K;
        int w = 0;



        for (long int p = 0; p < N-1; p++)
        {
            if(max_length-1 > 0)
            {
                if(A[p] != A[p+1])
                    max_length--;
                w++;
            }

            if(p == N-2)
            w++;
        }
        cout << w << endl;
    }
    return 0;
}
