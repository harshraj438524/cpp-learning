#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"num1:";
cin>>n;
cout<<"num2:";
cin>>m;
for(int i=n;i<=m;i++){
    if(i%2==0){
        cout<<i<<endl;
    }
}

    return 0;
}
