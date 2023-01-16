#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int a[n];
       vector<int>v;
       int count=1;
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       if(n==1){
           cout<<1<<" "<<1<<endl;
           
       }
       else if(n==2){
           if(a[1]-a[0]>2){
               cout<<1<<" "<<1<<endl;
           }
           else{
               cout<<2<<" "<<2<<endl;
           }
       }
       else{
           for(int i=0;i<n-1;i++){
               if(a[i+1]-a[i]<=2){
                   count++;
               }
               else{
                 v.push_back(count);
                   count=1;
               }
           }
           v.push_back(count);
          sort(v.begin(),v.end());
           cout<<v[0]<<" "<<v[v.size()-1]<<endl;
       }
    
    }

    return 0;
}
		