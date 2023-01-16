#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n,remnd,rev=0;
        cin>>n;
        int orgno=n;
        while(n>0){
            remnd=n%10;
            rev=rev*10+remnd;
            n=n/10;
        }
        if(rev==orgno){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }
    }
        return 0;
    }
		