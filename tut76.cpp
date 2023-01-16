#include <bits/stdc++.h>
using namespace std;
int main(){
string n="harshsaHJBJBHGCBm";
for(int i=0;i<n.size();i++){
    if(n[i]>='A' && n[i]<='Z'){
        n[i]=n[i]+32;
    }
}
transform(n.begin(),n.end(),n.begin(),::toupper);
transform(n.begin(),n.end(),n.begin(),::tolower);
string b="4232412556";
sort(b.begin(),b.end());
string c;
for(int i=b.size()-1;i>=0;i--){
    c=c+b[i];
}
sort(c.begin(),c.end(),greater<int>());
string d="adabasajbsasajbas";
int count =0;
for(int i=0;i<d.size();i++){
}
string f="qq";
for(int i=0;i<f.size()-1;i++){
    if(f[i]!=f[i+1]){
        cout<<"has";
        break;
    }
    else{
        cout<<"ds";
    }
}
return 0;
}