#include<bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    int a;
    int maxn=INT_MIN;
    int minn=INT_MAX;
for(int i=0;i<n;i++){
cin>>arr[i];
 maxn=max(maxn,arr[i]);
minn=min(minn,arr[i]);

}

cout<<maxn<<endl;
cout<<minn;

	return 0;
}