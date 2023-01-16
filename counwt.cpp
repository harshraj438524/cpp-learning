#include<bits/stdc++.h>
using namespace std;
int main(){
int i,n,e_count=0,o_count=0;
cin>>n;
for(i=1;i<=n;i++){
    if(i%2==0){
        e_count++;
        
    }
    else if(i%2!=0){
        o_count++;
    }
    
}
cout<<e_count<<" ";
cout<<o_count;

    return 0;
}