#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        for(int i=0;i<11;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int k;
        cin>>k;
        sort(v.begin(),v.end(),greater<int>());
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=v[i];
        }
        int p=count(v.begin(),v.end(),v[k-1]);
        int s=0;
        int i=0;
        while(v[i]!=v[k-1]){
        s++;
        i++;
        }
        int q=k-s;
        int x=fact(p-q)*fact(q);
        cout<<fact(p)/x<<endl;
    }
    
return 0;
}