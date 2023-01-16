  #include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        float num;
        float hra,da;
        cin>>a;
        if(a<1500)
        {
        
            hra=(a*0.1);
            da=(a*0.9);
            float sum=(hra+a+da);
            cout<<fixed<<setprecision(2)<<sum<<endl;
        }
        else
        {
            da=a*0.98;
            num=(a+500)+da;
            cout<<fixed<<setprecision(2)<<num<<endl;
        }
    }
    
	return 0;
}



