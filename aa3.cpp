#include<iostream>
using namespace std;
int fac(int n){
    int i,fact=1,r;
    for(i=1;i<=n;i++){
        fact=fact*i;

    }
    return fact;
}
int main(){
    int n,r;
    cin>>n>>r;
    
    cout<<fac(n)/(fac(n-r)*fac(r));
    return 0;
}