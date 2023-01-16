#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    bool flag=0;
    if(num==1 or num==2){
        cout<<"not prime";
    }
    else{
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            cout<<"not prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime";
    }
    }
return 0;
}