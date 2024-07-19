#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int a;
    int b;
    int choice;
    cout<<"\n\t\t***Calculator by using C++***\n";
    cout<<"1.Addition\n 2.Substraction\n 3.Multipliation\n4.Divison\n5.Exit\n";
    cout<<"Enter your choice";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter Two Numbers:";
        cin>>a>>b;
        cout<<"Addition of Two number is:"<<a+b;
        break;

        case 2:
        cout<<"Enter Two Numbers:";
        cin>>a>>b;
        cout<<"Substraction of Two number is:"<<a-b;
        break;

        case 3:
        cout<<"Enter Two Numbers:";
        cin>>a>>b;
        cout<<"Multiplication of Two number is:"<<a*b;
        break;

        case 4:
        cout<<"Enter Two Numbers:";
        cin>>a>>b;
        cout<<"Division of Two number is:"<<a/b;
        break;
        case 5:
        exit(0);
        break;
        default:
        cout<<"Enter Correct Choice";
    }

    return 0;
}