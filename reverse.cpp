#include<iostream>
using namespace std;
int main(){
    int n,rev,rem;
    cin>>n;
    rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;


    }
    cout<<rev;


    return 0;
}


