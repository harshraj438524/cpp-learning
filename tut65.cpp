#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int key,int n){
    int s=0;
    int e=n;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;

        }
        else{
            s=mid+1;
        }
    }
    return -1;

}
int main(){
    int arr[]={1,2,34,565,7879};
    int key=34;
    int n=5;
    cout<<binarysearch(arr,key,n);
return 0;
}