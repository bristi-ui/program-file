#include<iostream>
using namespace std;
int main()
{
    double num1,num2,result;
    char operation;
    //prompt user for input
    cout<<"enter the first number";
    cin>>num1;
    cout<<"enter an operator(+,-,*,/)";
    cin>>operation;
    cout<<"enter the second number";
    cin>>num2;
    //perform the chosen operation 
    switch (operation)
    {
        case '+':
        result = num1+num2;
        cout<<"result"<<result<<endl;
        break;
        case '-':
        result = num1-num2;
        cout<<"result"<<result<<endl;
        break;
        case '*':
        result = num1*num2;
        cout<<"result"<<result<<endl;
        break;
        case '/':
        if(num2!=0){
            result = num1/num2;
        cout<<"result"<<result<<endl;
        }
        else{
            cout<<"error division by zero is not allowed"<<endl;
        }
        break;
        default:
        cout<<"error invalid operator"<<endl;
        break;
    }   
        return 0;
    }