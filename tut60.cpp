#include <bits/stdc++.h>
using namespace std;
int binary(int n,int key,int arr[]){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            e=mid-1;

        }
        else{
            s=mid+1;
        }
    }
    return -1;

}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binary(n,key,arr);

return 0;
}