#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    string A,B;
	    cin>>A>>B;
	    int N;
	    cin>>N;
	    A = A+B;
	    string C="";
	    for(int i=0;i<N;i++){
	        cin>>B;
	        C=C+B;
	    }
	    vector<int> un1(26,0),un2(26,0);
	    for(int i=0;i<A.length();i++){
	        un1[A[i]-'a']++;
	    }
	    for(int i=0;i<C.length();i++){
	        un2[C[i]-'a']++;
	    }
	    bool x = true;
	    for(int i=0;i<26;i++){
	        if(un2[i]>un1[i]){
	            x = false;
	            break;
	        }
	    }
	    if(x) cout<<"YES"<<"\n";
	    else cout<<"NO"<<"\n";
	    
	    
	}
	
}
