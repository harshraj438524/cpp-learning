#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
    
    if(a<=b<=c and c<=b<=a){
        cout<<b;
    }
    else if(a<=c<=b and b<=c<=a){
        cout<<c;
    }
    else if(c<=a<=b and b<=a<=c){
        cout<<a;
    }
    }
    return 0;
}