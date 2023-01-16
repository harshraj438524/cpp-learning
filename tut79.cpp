#include<bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string s;
    cin>>s;
    int p=s.size();
    for(int i=0;i<p;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
        else{
            s[i]-=32;
        }

    }
    cout<<s;
return 0;
}