#include<iostream>
using namespace std;
int fac(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int i,j,n;
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            cout<<fac(i)/(fac(j)*fac(i-j))<<" ";

        }
        cout<<endl;
        
    }
    return 0;
}