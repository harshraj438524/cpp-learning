#include<bits/stdc++.h>
using namespace std;
int main(){
 int p;
 cin>>p;
 while(p--){
     int n;
     cin>>n;
     vector<int>v;
     for(int i=0;i<n;i++){
         int x;
         cin>>x;
         v.push_back(x);
     }
   int p=count(v.begin(),v.end(),1);
   int q=count(v.begin(),v.end(),-1);
   if(p==n || q==n){
       cout<<"NO"<<endl;
   }
   else {
       cout<<"YES"<<endl;
   }
 }
return 0;

 }