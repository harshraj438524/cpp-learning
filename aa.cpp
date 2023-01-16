#include<iostream>
using namespace std;
int fact(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
return fac;
}
int main(){
    int n;
    cin>>n;

    cout<<fact(n)/(6*fact(n-3));

        
    
    return 0;
}