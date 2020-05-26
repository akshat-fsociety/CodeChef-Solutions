#include <bits/stdc++.h>
using namespace std;
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        int N;
        cin >> N;
        int P;
        cin >> P;
        int A[N]; 
        for (int j = 0; j < N; j++){
            cin >> A[j];
        }

        // assuming that all are divisible by P
        int flag = 0; 
        for (int j = 0; j < N; j++){
            if(P%A[j] != 0){
            flag = 1;
            }
        }

        int one = A[0];
        if(flag == 0){
            if(one == 1)
            {
                cout << "NO" << endl;
            }
            // other case
            else
            {
                int Alast[N];
                // Initialising
                for (int d = 0; d < N-2; d++)
                {
                    Alast[d] = 0;
                }
                // Manipulations
                for (int f = 0; f < N; f++)
                {
                    int pickNum = A[N-f-1];
                    int q, r;
                    q = P/pickNum;
                    r = P%pickNum;
                    if(r == 0)
                    {
                        Alast[N-f-1] = q-1;
                        P = P-(pickNum*(q-1));
                    }
                    else
                    {
                        Alast[N-f-1] = q;
                        break;
                    }
                }
                // Printing
                cout << "YES ";
                for (int v = 0; v < N; v++)
                {
                    cout << Alast[v] << " ";
                }
            }
        }
        
        else{
            cout << "YES ";
            int A[N];

            for (int j = 0; j < N; j++){
                if(P%A[j] != 0){
                    A[j] = A[j];
                } else{
                    A[j] = 0;
                }
            }

            // sort(A, A+N, greater<int>());
            // List l;
            int flg = 0;
            int ALast[N];
            for (int k = 0; k < N; k++){
                if(A[N-k-1] > 0){
                    int pickNum = A[N-k-1];

                    int q, r;
                    if(P > pickNum)
                    {
                        q = P / pickNum;
                        r = P % pickNum;
                        if(q == 1)
                            q++;
                        ALast[N-k-1] = q;
                        P = r;
                    }  
                    else 
                    {
                        if(flg > 0){
                        ALast[N-k-1] = 0;
                        } else
                        ALast[N-k-1] = 1;
                        // break;
                        P = 0;
                        flg++;
                    }
                } else{
                    ALast[N-k-1] = 0;
                }
            }
            
            // printing numbers
            for (int l = 0; l < N; l++){
                cout << ALast[l] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}