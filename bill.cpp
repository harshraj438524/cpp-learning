#include<iostream>
using namespace std;
int main(){
    int a,n;
    cin>>n;
    a=n/100;
    n=n%100;
    a=a+(n/20);
    n=n%20;
    a=a+(n/10);
    n=n%10;
    a=a+(n/5);
    n=n%5;
    a=a+(n/1);

cout<<a;

    
    return 0;
}