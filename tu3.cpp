#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    string p="werw";
    p.pop_back();
    p.push_back('e');
    cout<<p;
return 0;
}
		