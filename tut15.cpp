#include<iostream>
using  namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
    if((a<b && b<c) || (c<b && b<a)){
    cout<<b<<"\n";
    }
 else if((b<a && a<c) || (c<a && a<b )){
  cout<<a<<"\n";
 }
  else{
  cout<<c<<"\n";
}
    }
    return 0;
}
