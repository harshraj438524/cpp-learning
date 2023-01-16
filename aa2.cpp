#include<iostream>
using namespace std;
int t1=0;
int t2=1;
int nextdigit;
void fab(int n){
    for(int i=0;i<n;i++){
    cout<<t1<<endl;
    nextdigit=t1+t2;
    t1=t2;
    
    t2=nextdigit;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fab(n);
}
