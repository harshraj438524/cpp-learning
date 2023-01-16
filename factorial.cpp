#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long q,s,h;
    int t;
    cin>>t;
    while(t--){
        cin>>q>>s;
        h=(q*(q+1)/2)-s;
        cout<<h<<endl;
    }
    return 0;
}
