#include <bits/stdc++.h>
using namespace std;
int har(int n){
    int num=0;
    while(n>0){
    int rem=n%10;
    num=10*num+rem;
    n=n/10;

}
return num;
}
int main(){
    int n;
    cin>>n;
    cout<<har(n);
    return 0;
}