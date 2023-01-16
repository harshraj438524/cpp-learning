#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int  num=0;
        while(a>0){
            int rem=a%10;
            num=10*num+rem;
            a=a/10;

        }
        cout<<num<<endl;
    }
    return 0;
}