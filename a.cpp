#include<iostream>
using namespace std;
int max(int a,int b,int c){
    if (a>b){
        if(a>c){
            return a;
        }
    }
    else if(b>c){
        return b;
    }
    else {
        return c;
    }

}
int min(int a,int b,int c){
    if(a<b){
        if(a<c){
            return a;
        }
    }
    else if (b<c){
        return b;
    }
    else {
        return c;
    }
}

int main(){
    cout<<max(23,234,453);
    cout<<min(23,234,453);
    

    return 0;
}


