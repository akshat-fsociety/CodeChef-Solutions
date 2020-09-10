// A puzzle Game
/*!
* Copyright (c) 2020 Abhishek Srivastava
*/
// Not working
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int f = 0;
    if(n == 2)
    return true;

    if(n%2 == 0)
    return false;
    
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if(n%i == 0)
        f++;
    }
    
    if(f == 1)
    return true;
    else return false;
}

bool ifSumPrime(int b[3][3], int r1, int c1, int r2, int c2)
{
    int sum = 0;
    if(r1 >= 0 && r2 >= 0 && r1 <= 2 && r2 <= 2 
        && c1 >= 0 && c2 >= 0 && c1 <= 2 && c2 <= 2)
        {
            sum = b[r1][c1] + b[r2][c2];
            if(isPrime(sum))
                return true;
            else return false;
        }
    return false;
}

int ans = 0;

bool primeSolver(int b[3][3], int r, int c)
{
    if(r == 2 && c == 2)
    {
        return true;
    }
    
    int row[4] = {0, 0, +1, -1};
    int col[4] = {-1, +1, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        int curRow = r + row[i];
        int curCol = c + col[i];

        if(ifSumPrime(b, r, c, curRow, curCol)){
            
            swap(b[r][c], b[curRow][curCol]);
            ans++;

            if(primeSolver(b, curRow, curCol)){
                return true;
            }
        }
    }
    return false;
}

void printBoard(int b[3][3]){
    int n = 3;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << b[i][j];
        }
        cout << endl;
    }
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--)
    {
        int board[3][3];

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> board[i][j];
            }
        }

        if(primeSolver(board, 0, 0)){
            printBoard(board);
            cout << "ans\n";
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}
