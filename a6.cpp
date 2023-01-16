#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        float a;
        float gd;
        cin>>a;
        if(a<1500){
            gd=a+a*0.1+a*0.90;
        }
        else{
            gd=a+500+a*0.98;
        }
        cout<<fixed<<setprecision(2)<<gd<<endl;
    }

    return 0;
}
		