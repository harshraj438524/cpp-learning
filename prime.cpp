#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    bool flag=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime";
            flag=1;
            break;
        }
    }
        if (flag==0){
            cout<<"prime";
        }
    
    return 0;

}