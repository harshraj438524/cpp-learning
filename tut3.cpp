#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[]={"greater than 9","one","two","three","four","five","six","seven","eight","nine",};
    if(n>9){
        cout<<a[0];
    }
    else
    if(1<=n<=9){
        cout<<a[n];
    }
    return 0;
}