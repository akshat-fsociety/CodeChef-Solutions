/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main()
{
    int t;
    cin>>t;
    map<int, int> mapx;

    mapx[0] = 10000000000000;
    mapx[5] = 0;
    mapx[10] = 0;
    mapx[15] = 0;
    
    while(t--){
        int n;
        cin>>n;
        bool found = true;
        for(int i=0; i<n; i++){

            int curr;
            cin>>curr;
            
            if(found){
                int rem = curr-5;
            
                if(rem==10){
                    if(mapx[rem]>0){
                        mapx[rem]--;
                        mapx[curr]++;
                    }
                    else if(mapx[rem/2]>1){
                        mapx[rem/2]-=2;
                        mapx[curr]++;
                    }
                    else found = false;
                    continue;
                }
            
                if(rem==5){
                    if(mapx[rem]>0){
                        mapx[rem]--;
                        mapx[curr]++;
                    }
                    else found = false;
                }
                if(rem==0) mapx[curr]++;
            }
        }
        
        if(found) {
            cout<<"YES" << endl;
        }
        else cout<<"NO" << endl;
        mapx[5] = 0;
        mapx[10] = 0;
        mapx[15] = 0;

    }
    return 0;
}
