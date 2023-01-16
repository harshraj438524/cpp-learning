#include <bits/stdc++.h>
using namespace std;
int flipbits(int arr[],int n){
    int ct0=0;
    int ct1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            ct0++;
        }
        else{
            ct1++;
        }
    }
   int ct=0;
   int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            ct++;
        }
        else{
            ct--;
        }
        if(ct<0){
            ct=0;
        }
        mx=max(ct,mx);
          
    }
    return mx+ct1;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p=flipbits(arr,n);
    cout<<p<<endl;
    
    return 0;
}