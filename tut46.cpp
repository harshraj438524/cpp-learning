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
    int arr[4]={1,3,4,5};
    cout<<binary(4,4,arr);

return 0;
}