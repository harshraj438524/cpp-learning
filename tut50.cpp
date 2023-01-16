#include <bits/stdc++.h>
using namespace std;
bool har(int n){
    bool flag=true;
    if(n<2){
        flag=false;
    }
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
               flag=false;
               break;
            }
            
        }
    }
    return flag;
}


 
int main(){
    int n;
    cin>>n;
    if(har(n)){
        cout<<"prime";
    }
    else{
        cout<<"non prime";
    }
    return 0;
}