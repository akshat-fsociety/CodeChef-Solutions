#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    int Tprofit  = 0;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;

        int A[4][4] = {0};

        for (int j = 0; j < N; j++)
        {
            char m;
            int t;
            cin >> m;
            cin >> t;
            if(m == 'A')
            {
                if(t == 12)
                    A[0][0]++;
                if(t == 3)
                    A[0][1]++;
                if(t == 6)
                    A[0][2]++;
                if(t == 9)
                    A[0][3]++;
            }
            if(m == 'B')
            {
                if(t == 12)
                    A[1][0]++;
                if(t == 3)
                    A[1][1]++;
                if(t == 6)
                    A[1][2]++;
                if(t == 9)
                    A[1][3]++;
            }
            if(m == 'C')
            {
                if(t == 12)
                    A[2][0]++;
                if(t == 3)
                    A[2][1]++;
                if(t == 6)
                    A[2][2]++;
                if(t == 9)
                    A[2][3]++;
            }
            if(m == 'D')
            {
                if(t == 12)
                    A[3][0]++;
                if(t == 3)
                    A[3][1]++;
                if(t == 6)
                    A[3][2]++;
                if(t == 9)
                    A[3][3]++;
            }
        }
        int profit = 0;
        int rupee = 100;
        int row;

        for (int o = 0; o < 4; o++)
        {

            int lar=A[0][0];

            // finding largest number in whole
            for (int l = 0; l < 4; l++){
                for (int m = 0; m < 4; m++){
                    if(A[l][m] >= lar){
                        lar = A[l][m];
                        row = l;
                    }
                }
            }

            // for largest, calculating profit 
            if(lar > 0){
                profit += (lar*rupee);
                rupee -= 25;
            } else{
                profit -= 100;
            }

            // making other element of taken row as 0
            for (int n = 0; n < 4; n++){
                A[row][n] = 0;
            }
        }
        cout << profit << endl;
        Tprofit += profit;
    }
    cout << Tprofit;
    return 0;
}