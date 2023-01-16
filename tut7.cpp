#include<iostream>
using namespace std;
int main(){
int t,n,sum,p,remnd;
cin>>t;
while(t--){ 
 sum=0; 
  
    
  cin>>n;
  remnd=n%10;
while(n>0){
    p=n%10;
    n=n/10;
  
} 
cout<<remnd+p<<endl;
}

return 0;
}
