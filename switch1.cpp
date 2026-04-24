#include<iostream>
using namespace std;
int main()
{
        int num1,num2,ch,sum;
        cout<<"Enter the numbers:";
        cin>>num1>>num2;
        cout<<"\n1.addition\n2.muliplication\n3.division\n4.substraction\n5.modulo";
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                sum=num1+num2;
                cout<<"sum="<<sum;
                break;
            case 2:
                sum=num1*num2;
                cout<<"mul="<<sum;
                break; 
            default:
                cout<<"invalid choice";  
        }
}