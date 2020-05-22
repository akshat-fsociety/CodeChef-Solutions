#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, K;
        cin >> N;
        cin >> K;
        
        char arr[N] = "";
        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
        }


        for (int k = 0; k < K; k++)
        {
            if(arr[N-1-k] == 'H')
                {
                    for (int l = 0; l < N-1-k; l++)
                    {
                        if(arr[l] == 'H')
                            arr[l] = 'T';
                        else if(arr[l] == 'T')
                            arr[l] = 'H';
                    }
                    // cout << "\n//////////";
                    // for (int f = 0; f < N-k-1; f++)
                    // {
                    //     cout << arr[f] << ",";
                    // }
                    
                }
            
            arr[N-k-1] = 'Q';
            // N--;
        }

        int cnt = 0;
        for (int p = 0; p < N-K; p++)
        {
            if(arr[p] == 'H') 
            cnt += 1;
        } 
        cout << cnt << endl;
    }
    return 0 ;
}
