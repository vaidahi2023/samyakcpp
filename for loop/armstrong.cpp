//153 -- 1+125+27=153
#include<iostream>
using namespace std;
int main()
{
    int num,cube,sum=0,temp=0;
    cout<<"enter the number";
    cin>>num;
    temp=num;
    for(;num>0;)
    {
        cube=num%10;
        sum=sum+cube*cube*cube;
        num=num/10;
    }
    if(sum==temp)
    {
        cout<<"it is armstrong number";
    }
    else 
    {
        cout<<"it is not an armstrong number";
    }
}