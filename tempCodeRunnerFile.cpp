#include<iostream>
using namespace std;
int main()
{
    int num=0;
    int i,a=75;
        cout<<"guess a number between 1 to 100";
        for(i=0;i<=100;i++)
        {
            cin>>num;
        if(num==a)
        {
            cout<<"congratulations";
        }
        else if(num<a)
        {
            cout<<"give a bigger number";
        }
        else if(num>a)
        {
            cout<<"give a smaller number";
        }
        }
}