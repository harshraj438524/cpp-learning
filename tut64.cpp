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
      int arr[n];
      vector<int>v;
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      int count=1;
      for(int i=0;i<n-1;i++){
        int p=i;
        for(int j=i;j<n-1;j++){
         // cout<<n-p;
          
         if(arr[j]*arr[j+1]<0){
            count++;
          }
          else{
            v.push_back(count);
            count=1;
            break;
          }
        }
        if(count==n-p){
          v.push_back(count);
          count=1;
        }
      }
      v.push_back(1);
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
      }
      
    
      }
    return 0;
}
		