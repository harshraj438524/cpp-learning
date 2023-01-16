#include <bits/stdc++.h> 
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
        string a,b,x,y;
        cin>>a>>b;
        x=a+b;
        int n;
        cin>>n;
        while(n--){
            string s;
            cin>>s;
            y=y+s;
        }
        bool flag=true;
        for(char i='a';i<='z';i++){
            int p=count(y.begin(),y.end(),i);
            int q=count(x.begin(),x.end(),i);
            if(p>q){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}