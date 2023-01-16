#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxno=INT_MIN;
    int minno=INT_MAX;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
        maxno=max(maxno,array[i]);
        minno=min(minno,array[i]);
    }
    cout<<maxno<<" "<<minno;
    return 0;
}