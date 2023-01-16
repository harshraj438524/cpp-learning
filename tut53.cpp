#include <bits/stdc++.h>
using namespace std;
bool har(int n){
    bool flag=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=false;
            break;
        }

    }
    return flag;

}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(har(i)==true){
            cout<<i<<"is prime"<<endl;
        }
    }

    return 0;
}