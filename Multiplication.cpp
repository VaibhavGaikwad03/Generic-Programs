//Write a generic program to multiply two numbers.

#include<iostream>
using namespace std;

template<class T>

T Multiply(T iNo1, T iNo2)
{
    T iAns;

    iAns = iNo1 * iNo2;

    return iAns;
}

int main()
{
    int iRet = Multiply(50, 23);
    cout<<"Multiplication is : "<<iRet<<endl;

    int fRet = Multiply(36.25, 12.02);
    cout<<"Multiplication is : "<<fRet<<endl;

    return 0;
}