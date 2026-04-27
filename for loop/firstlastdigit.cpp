#include<iostream>
using namespace std;
int main()
{
    int num,ld,fd;
    cout<<"enter the number:";
    cin>>num;
    ld=num%10;
    for(;num!=0;)
    {
        fd=num;
        num=num/10;
    }
    cout<<"last digit is "<<ld<<endl;
    cout<<"first digit is "<<fd<<endl;
}