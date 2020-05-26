#include <bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    int Tprofit  = 0;
    for (int i = 0; i < T; i++)
    {
        long int N;
        cin >> N;

        long int A[4][5] = {0};
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

        // adding last column as sum of previous
        for (int l = 0; l < 4; l++){
            for (int m = 0; m < 5; m++){
                A[l][4] += A[l][m];
            }
        }

        // provide index in order value
        int arr[4] = {0};
        int ind;
        for (int m = 0; m < 4; m++){
            int large = 0;
            for (int l = 0; l < 4; l++){
                if(large >= A[l][4])
                {
                    large = A[l][4];
                    ind = l;
                }
            }
            arr[3-m] = ind;
            A[ind][4] = 0;
        }
        
        int profit = 0;
        int rupee = 100;
        int row;

        int checkInd = 0;
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
            // checking if that largest is in that index

            int Duplar = 0;

            for (int y = 0; y < 4; y++)
            {
                if(lar == A[arr[checkInd]][y])
                {
                    Duplar = lar;
                    for (int q = 0; q < 4; q++)
                    {
                        A[arr[checkInd]][q] = 0;
                        A[q][y] = 0;
                    }
                }
                else
                {
                    checkInd++;
                }
            }

            // for largest, calculating profit 
            if(Duplar > 0){
                profit += (Duplar*rupee);
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