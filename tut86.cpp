#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<int,int>m;
	m[0]=3;
	m[4]=5;
	m[3]=4;
	for(auto it=m.begin();it!=m.end();it++){
		cout<<(*it).first<<endl;

	}
    return 0;
}
   