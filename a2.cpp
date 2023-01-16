#include <bits/stdc++.h> 
using namespace std;
int sum(int d,int n){
for(int i=1;i<=d;i++){
    n=n*(n+1)/2;
    
}
return n;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>d>>n;
        cout<<sum(d,n)<<endl;

    }
    return 0;
}
		