#include <bits/stdc++.h> 
using namespace std;
int main(){
        char a,b,c,d,f,B,C,D,F;
        cin>>a;
        if(a==B or a==b){
            cout<<"BattleShip";
        }
        else if(a==c || a==C){
            cout<<"Cruiser";
        }
        else if(a==D || a==d){
            cout<<"Destroyer";
        }
        else{
            cout<<"Frigate";
        }
    return 0;
}
		