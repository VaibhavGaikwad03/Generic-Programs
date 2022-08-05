//Write a generic program to multiply two numbers.

#include<iostream>
using namespace std;

template<class T>

T Multiply(T No1, T No2)
{
    T Ans;

    Ans = iNo1 * No2;

    return Ans;
}

int main()
{
    int iRet = Multiply(50, 23);
    cout<<"Multiplication is : "<<iRet<<endl;

    int fRet = Multiply(36.25, 12.02);
    cout<<"Multiplication is : "<<fRet<<endl;

    return 0;
}