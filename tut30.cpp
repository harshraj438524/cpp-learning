#include<bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int b;
    cin>>b;
    int j=b/2048;
    b=b%2048;
    while(b!=0)
    {
        j+=b%2;
        b/=2;
    }
    cout<<j<<endl;
}
return 0;
}

