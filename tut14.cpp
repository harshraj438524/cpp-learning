#include<iostream>
using namespace std;
int main(){
    long long t,k,a=0;
    cin>>t>>k;
    while(t--){
        long long n;
        cin>>n;
      if(n%k==0){
      a=a+1;
      }
      else{
          a=a+0;
      }
      
      
    }
    cout<<a;
    
    
    return 0;
}