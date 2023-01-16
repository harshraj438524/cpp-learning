#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
long long a,b;
cin>>a;
cin>>b;
long long c;
if(a%2==0 && b%2==0){
    c=(a/2)*(b/2) + (b/2)*(a/2);
}
else if(a%2!=0 && b%2!=0){
    c=c=(a+1)/2*(b+1)/2 + (b+1)/2*(a+1)/2;
}
else if (a%2 ==0 && b%2!=0){
    c=(a/2)*(b+1)/2 +(a/2)*(b)/2;
}
else{
    c=(a+1)/2*(b)/2 +(a/2)*(b)/2;
}
cout<<c;
return 0;
}