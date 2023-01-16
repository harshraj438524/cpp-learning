#include<bits/stdc++.h> 
using namespace std;
int p(int a,int b,int c){
    if(a>b){
        if (a>c){
            return a;
        }
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
    return a,b,c;
}
int main(){
    cout<<p(2,35,34);
    return 0;
}