#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int nSlides(int h, int v){  
    if(v%2 == 0) return h + (v/2);
    else return h + ((v-1)/2);
}

int main(){
    int pho;
    int a=0;
    int b=a;
    int v=a;
    cin >> pho;
    int hc=0,vc=0;
    int tSlides;
    string tags[105];
    char orn[100005];
    int ntags[100005];
    int vtags[100005];

    string t[100005];
    string vt[100005];

    for (int i = 0; i < pho; i++)
    {
        cin >> orn[i];
        if(orn[i]=='H'){
            hc++;
        }
        else{
            vc++;
        }
        cin >> ntags[i];
        for (int j = 0; j < ntags[i]; j++){
            cin >> tags[j];
        }

        int index=0;
        for (int k = b; k < ntags[i]+b; k++)
        {
            t[a]=tags[index];
            index++;
            a++;
            v++;
        }
        
        b=a;
    }
    tSlides = nSlides(hc, vc);
}
