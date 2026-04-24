#include<iostream>
using namespace std;
int main()
{
    int num,rem=0,rev=0,temp=0;
    cout<<"enter the number";
    cin>>num;
    temp=num;
    for(;num>0;)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<"Reverse number is "<<rev;

}