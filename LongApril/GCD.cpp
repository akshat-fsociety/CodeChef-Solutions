// Unit GCD
// Incomplete
#include <bits/stdc++.h>
using namespace std;

void printgame(vector<int> v[] , int n){

    for (int i = 0; i < n; i++)
    {
        if(v[i].size() > 1){
            for (int j = 0; j < v[i].size(); j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void insert(vector<int> v[], int num, int n){
    for (int i = 0; i < n; i++)
    {
        bool b = true;
        
        for (int j = 0; j < v[i].size(); j++)
        {
            if(v[i][j] % num == 0){
                b = false;
                // break;
            }
        }
        if(b == false) continue;
        else {
            v[i].push_back(num);
            return;
        }
    }
    
}

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    for (int w = 0; w < T; w++)
    {
        long int n;
        cin >> n;
        
        vector<int> v[n];
        for (int i = 0; i < n; i++)
        {
            insert(v, i+1, n);
        }
        
        printgame(v, n);
    }
    return 0;
}