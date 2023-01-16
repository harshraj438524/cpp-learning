#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    int ans=0;
	    cin>>n>>x;
	    int a[n];
	    for(int i=1;i<=n;i++){
	        cin>>a[i];
	    }
	    for(int j=1;j<=n;j++){
	           if(a[j]<x){
	                ans=max(j,ans);
	           }
	            else{
	                continue;
	            }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}