#include <bits/stdc++.h>
using namespace std;

int SubsSum(long int a[], long int n){

    int max_so_far = 0;
    int max_ends_here = 0;

    for (long int i = 0; i < n; i++){
        max_ends_here += a[i];
        if(max_so_far < max_ends_here){
            max_so_far = max_ends_here;
        }
        if(max_ends_here < 0){
            max_ends_here = 0;
        }
    }
    return max_so_far;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        long int N;
        cin >> N;
        long int arr[N];
        for (long int j = 0; j < N; j++){
            cin >> arr[j];
        }

        // int ans[N];
        for (long int j = 0; j < N; j++) {
            // ans[j] = SubsSum(arr, N);
            cout << SubsSum(arr, N) << " ";
            int temp = 0;
            
            //  Rotating array
            for (long int k = 0; k < N-1; k++){
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    return 0;
}
