#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,u,d;
        cin>>n>>u>>d;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        int p=0;
        for(int i=0;i<n-1;i++){
           if(a[i]==a[i+1]){
               count++;
           }
           else if(p>1){
               break;
           }
           else if(a[i+1]>=a[i]){
               if(a[i+1]-a[i]<=u){
               count++;
               if(a[i+1]-a[i]>u){
                   break;
               }
           }
           }
           else if(a[i+1]<a[i]){
               if(a[i]-a[i+1]<=d){
               count++;
               if(a[i]-a[i+1]>d){
                   count++;
                   p++;
               }
           }
           }
        }
        cout<<count<<endl;

    }
return 0;
}