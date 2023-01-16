#include<bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    bool prime=0;
    if(n==1 || n==0){
        prime=1;
    }

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            prime=1;
            break;
        }
    }
    if(prime==0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    }
    return 0;
}