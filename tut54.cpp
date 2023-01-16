#include<bits/stdc++.h> 
using namespace std;
int binary(int n,int a[],int key){
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
int sbinary(int n,int a[],int key){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
			ans=mid;
			s=mid+1;
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
	int n;
	cin>>n;
	int key;
	cin>>key;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int p=binary(n,a,key);
	int q=sbinary(n,a,key);
	cout<<p<<" "<<q<<endl;
   
return 0;
}