#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int mask=0;
int m=n;
while(m!=0){
   m>>1;
   mask=((mask<<1)|1);

}  
int ans=(~n)& mask; 
cout<<ans;
return 0;
}