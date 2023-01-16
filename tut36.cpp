#include <bits/stdc++.h> 
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int maxno=INT_MIN;
int minno=INT_MAX;
int arr[n];
for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        maxno=max(maxno,arr[i]);
        cout<<maxno;
        minno=min(minno,arr[i]);
    }

return 0;
}