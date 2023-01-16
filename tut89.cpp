#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
    cin>>t;
    while(t--){
    int n,p;
    cin>>n>>p;
    int a[n];
    int ar[n];
    vector<int>v;
    vector<int>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        if(ar[n]==0){
            v.push_back(ar[i]);
        }
        else{
            s.push_back(a[i]);
        }
    }
    sort(v.begin(),v.end());
    sort(s.begin(),s.end());
    cout<<v[0]<<endl;
    if(v[0]+s[0]<=100-p){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    
    }
    return 0;
}
   