#include<iostream>
using namespace std;
int sum(int n){
int t;
t=(n*(n+1))/2;
return t;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
