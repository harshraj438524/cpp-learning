#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    k=n-1;

    for(int i=1;i<=n;i++){
        for(int j=k;j>=1;j-- ){
             cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        k=k-1;
        cout<<endl;
    }
return 0;
}