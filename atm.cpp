#include <iostream>
using namespace std;
int main(){
int  x;
float y;
    cin>>x;
    cin>>y;
    if(x%5==0 && x<=y-0.50){
        float z=y-(x+0.50);
        cout<<z;
    }
    else{
        cout<<y;
    }
    

    return 0;


}