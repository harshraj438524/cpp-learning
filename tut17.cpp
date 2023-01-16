#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,remnd,a=0;
        cin>>n;
        while(n>0){ 
            remnd=n%10;
            a=a*10+remnd;
            n=n/10;

        }
        cout<<a<<"\n";
    }
    return 0;
}
		