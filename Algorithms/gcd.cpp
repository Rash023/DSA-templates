#include <iostream>

using namespace std;


int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;

        }

    }
    return a;
}

int main()
{
    int a,b;
    cout<<"enter values of a and b";
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"gcd of "<<a<<"and"<<b<<"is:"<<ans<<endl;

}