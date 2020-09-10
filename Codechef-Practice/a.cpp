#include <bits/stdc++.h>
using namespace std;


int main() {

	int n;
	cin>>n;

	while(n--)
	{
	    long long int x,sum=0;

	    cin>>x;
	    vector<long long int> v(x+1,0);

	    for(long i=0;i<=x;i++)
	    {
	        cin>>v[i];
	    }

	    long s=v[0]*2;
	    long p=1;

	    for(long i=1;i<=x;i++)
	    {
	        p = (p*2);
	        sum = sum*2+(v[i]*s);
	        s = (s+v[i]*p);
	    }
	    cout<<sum<<endl;
        
	}
	return 0;
}