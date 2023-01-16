#include<bits/stdc++.h> 
using namespace std;
long long maxSubSumKConcat(vector<int> &arr, int n, int k)

{
	int sum=0;
int mx=INT_MIN;
	for(int i=0;i<k;i++){
		for(int i=0;i<n;i++){
			sum+=arr[i];
			if(sum<0){
				sum=0;
			}
			mx=max(mx,sum);
		}
	}
	return mx;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n>>k;
	vector<int>a;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	int p=maxSubSumKConcat(a,n,k);
	cout<<p<<endl;
	}


return 0;
}