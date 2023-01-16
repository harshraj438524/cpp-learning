#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=1;
        int p=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]*arr[i+1]<0){
                count++;
                p++;
            }
            else if()
            else{
                v.push_back(count);

            }

        }
        v.push_back(1);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }

    }
    return 0;
}
		