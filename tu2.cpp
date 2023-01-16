#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string s;
    s=" h ar s   h";
    for(int i=0;i<s.size();i++){
        if(s.find(' ')==-1){
            break;
        }
        else{
            int p=s.find(' ');
            s.erase(p,1);
        }
    }
    cout<<s;

    

return 0;
}
		