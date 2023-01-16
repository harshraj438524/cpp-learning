#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a%2==0 && b-a>=2){
			cout<<a<<" "<<a+2<<endl;
		}
		else if((a%2==0 && b%2!=0) && b-a==1){
			cout<<-1<<endl;
		}
		else if((b%2==0 && a%2!=0 )&& b-a==1){
			cout<<-1<<endl;
		}
		else if((a%2!=0 && b%2!=0 ) && b-a==2){
			cout<<-1<<endl;
		}
		else if(a%3==0 && b-a>=3){
			cout<<a<<" "<<a+3<<endl;
		}
		else{
			cout<<a+1<<" "<<a+3<<endl;
		}
	}
	
	return 0;
}
   