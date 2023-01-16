#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    float q,p;
	    cin>>q>>p;
	    if(q*p>=1000){
	        cout<<(q*p-10*q*p/100);
	    }
	    else{
	        cout<<q*p<<setprecision(6)<<endl;
	    }
	}
    
    
    return 0;
}
		