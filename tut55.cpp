#include<bits/stdc++.h> 
using namespace std;
int binary(int n,int a[n],int key){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(key>a[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return ans;
}
int main() {
	int n>>key;
	cin>>n>>key;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int p=binary(n,arr[n],key);
	cout<<p<<endl;
   
return 0;
}