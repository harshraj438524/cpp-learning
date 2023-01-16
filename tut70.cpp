#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>e,o;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                e.push_back(arr[i]);
            }
            else{
                o.push_back(arr[i]);
            }
        }
        int x=e.size();
        int y=o.size();
        if(e.size()==0 || o.size()==0){
            cout<<0<<endl;
        }
        else if(e.size()==o.size() && x%2==0 ){
            cout<<e.size()/2<<endl;
        }
        else if(e.size()==o.size() && x%2!=0 ){
            cout<<e.size()<<endl;
        }
        else if(e.size()>o.size() && o.size()%2==0){
            cout<<y/2<<endl;
        }
        else if(e.size()>o.size() && o.size()%2!=0){
            cout<<y<<endl;
        }
        else if(x<y && y%2==0 && y/2<=x){
            cout<<y/2<<endl;

        }
        else if(x<y && y%2!=0){
            cout<<x<<endl;
        }
    }
        
return 0;
}