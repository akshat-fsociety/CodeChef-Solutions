#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertSer(int rows, int slots, int servers, int farr[][1000], int *arrslots){
    int temp=0, perm=0;


    for (int i = 0; i < servers; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            perm = 0; 
            temp = 0;
            for (int k = 0; k < slots; k++)
            {
                if(farr[j][k] == -1)
                {
                    if(temp < slots)
                    {
                        temp++;
                        perm++;
                    }
                }
                if(farr[j][k] == -2)
                {
                    if(temp < slots)
                    {
                        temp++;
                    }
                }
                if(temp-perm+1 == arrslots[i])
                {
                    for (int l = perm; l <= temp; l++)
                    {
                        farr[j][l] =  arrslots[i];
                    }
                    temp++;
                    perm = temp;
                }
            }
        }
    }
}

bool check(int a, int b){
    return a>b;
}


int main(){
    int rows, uslots, pools, servers, slots;
    cin >> rows;
    cin >> slots;
    cin >> uslots;
    cin >> pools;
    cin >> servers;
    
    int farr[1000][1000];
    int arrslots[1000];
    int arrcap[1000];

    for (int i = 0; i < uslots; i++)
    {
            int  xcor, ycor;
            cin >> xcor;
            cin >> ycor;
            farr[xcor][ycor] = -1;
    }

    for (int i = 0; i < servers; i++)
    {
        cin >> arrslots[i];
        cin  >> arrcap[i];
    }
    sort(arrcap+0, arrcap+slots, check);


    insertSer(rows, slots, servers, farr, arrslots);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < slots; j++)
        {
            cout << farr[i][j];
        }
        cout << endl;
    }
    
}
