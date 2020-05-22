#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long int T;
    cin >> T;
    for (long int i = 0; i < T; i++){
        long long int N;
        cin >> N;
        char A[N];
        char B[N];
        long long int a=0, b=0;
        for (long long int k = 0; k < 2*N; k++){
            if(k%2 == 0){
                cin >> A[a];
                a++;
            }
            else if(k%2 != 0){
                cin >> B[b];
                b++;
            }
        }
        // for (long int t = 0; t < N; t++)
        // {
        //     cout << A[t] << " , " << B[t];
        // }
        
        long int sumA=0,sumB=0;
        long int ind = 0;

        for (long long int k = 0; k < 2*N; k++){
            if(A[k] == '1'){
                sumA++;
            }
            if(B[k] =='1'){
                sumB++;
            }

            if(k == N){
                if(sumA >= sumB*2){
                    ind = k;
                    break;
                }
                if(sumB >= sumA*2){
                    ind = k;
                    break;
                }
            }

            if(k > N){
                if((sumA-sumB) >= ((2*N)-k)/2 || (sumB-sumA) >= ((2*N)-k)/2)
                {
                    ind = k;
                    break;
                }
            }

        }
        cout << ++ind << endl;
    }
    return 0;
}
