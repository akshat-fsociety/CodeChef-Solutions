// Squared Subsequences
// Using Bitmasking
#include <bits/stdc++.h>
using namespace std;


bool isTrigno(int n){
    if(n%4 == 0 || n%2 != 0)
        return true;
    else return false;
}

    bool p(int n){

    int a[10],i; 
    for(i=0; n>0; i++)    
    {    
    a[i]=n%2;    
    n= n/2;  
    }    

    int ch = 0;

    // cout<<"Binary of the given number= ";    
    for(i=i-1 ;i>=0 ;i--)    
    {    
    // cout<<a[i];    
    if(i>0)
    if(a[i] != a[i-1])
        ch++;
    }    

    
	if(ch >= 2)
		return false;
	else return true;
    }
    

vector<int> v;
vector<int>::iterator it; 

int printsubs(long int* a, int no){

    int i = 0;
	int prod = 1;
	int flag = 0;
	int f = 0;

    while(no>0){
		if(no&1) {
			prod = prod*a[i];
			if(isTrigno(prod)){
				it = find (v.begin(), v.end(), prod); 
				if(it == v.end()){
					f++;
					flag++;
					// cout << "--" << prod << "--";
					v.push_back(prod);
				}
			}
		} else f++;
		
        i++;
        no = no>>1;
    }

	return flag;
}

void generateSubsequence(long int* a, int n){

    int c = 0;
    int range = (1<<n) - 1;
    for (int i = 1; i <= range; i++)  {
		if(p(i)){
			// cout << " " << c << "//" << i << " "; 
			c += printsubs(a, i);
		}
    }
    cout << c << endl;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    for (int w = 0; w < T; w++)
    {
        long int N; cin >> N;

        long int a[100000];

        for (long int i = 0; i < N; i++){
            cin >> a[i];
        }
        
        generateSubsequence(a, N);
    }
	return 0;
}
