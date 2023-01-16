#include<bits/stdc++.h> 
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    char s[10];
    for(int i=0;i<9;i++){
        cin>>s[i];
    }
    for(int i=0;i<9;i++){
        if((s[0]+s[1])%2==0 && (s[3]+s[4])%2==0 && (s[4]+s[5])%2==0 &&(s[7]+s[8])%2==0 && (s[6]=='-') && (s[2]!='A' && s[2]!='E' && s[2]!='I' && s[2]!='O' && s[2]!='U')){
            cout<<"VALID";
        }
        else{
            cout<<"INVALID";
            break;
        }
    }
    
return 0;
}