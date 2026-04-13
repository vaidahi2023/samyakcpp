// logical operators: &&,||,!
#include<iostream>
using namespace std;
int main()
{
        int a,b,sum,sub,mul,div,mod;
        cout<<"enter the number:";
        cin>>a>>b;
        cout<<"a>b && a==10="<<((a>b)&&(a==10))<<endl;
        cout<<"a>b || a==10="<<((a>b)||(a==10))<<endl;
        cout<<"! a>b"<<!(a>b);
}