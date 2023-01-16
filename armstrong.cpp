#include<bits/stdc++.h>
using namespace std;
int main(){

int a,sum,rem,n;
int org=n;
cin>>n;
sum=0;
while(n>0){
    rem=n%10;
    sum=sum+pow(rem,3);
    n=n/10;
}
cout<<sum;

    return 0;
}


