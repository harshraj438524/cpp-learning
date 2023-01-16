#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3]={1,2,2};
    int sum=0;

    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                sum=sum+arr[k];
            }
            cout<<endl;
        }

    }
    cout<<sum;
return 0;
}