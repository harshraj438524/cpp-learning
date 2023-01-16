#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n=0;
    cin>>n;
    if(n%4==0){
        n=n+1;
    }
    else {
        n=n-1;
    }
    cout<<n;
    return 0;
}
		