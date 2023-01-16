#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a=0;
    while(n>0){
    if(n%10==4){
        a=a+1;
    }
    else{
        a=a+0;
    }
    n=n/10;
}
cout<<a<<endl;
}
return 0;
}
		