#include<iostream>
using namespace std;
int main()
{
        int ch;
        cout<<"enter the choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"your choice is 1";
                break;
            case 2:
                cout<<"your choice is 2";
                break;
            default:
                cout<<"invalid choice";
        }
}