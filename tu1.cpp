#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    while(true){
        string s;
        cin>>s;
        if(s.size()==0){
            break;
        }
        else{
        for(int i=0;i<=s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]-=32;
            }
        }
        cout<<s<<endl;
    }
    }

return 0;
}
		