
#include <iostream>

using namespace std;

int main()
{
    int n;cin>>n;
    if(n==5 || n==4){
        cout<<"I'm very excited";
    }
    else if(n==3 || n==2 || n==1){
        cout<<"I'm a little excited";
    }
    else if(n==0){
        cout<<"I'm not excited";
    }
    return 0;
}
