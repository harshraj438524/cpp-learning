#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
    
    if((a<b && b<c) || (c<b && b<a)){
    cout<<b;
    }
 
 else if((b<a && a<c) || (a>c && a<b )){
  cout<<a;
 }
  else{
  cout<<c;
}
    }
    return 0;
}