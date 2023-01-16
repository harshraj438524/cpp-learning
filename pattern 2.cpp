#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%1==0 && n%n==0 && n%2==0){
      cout<<"not prime"
      else {
        cout<<"prime";
      }
    }
    return 0;

}