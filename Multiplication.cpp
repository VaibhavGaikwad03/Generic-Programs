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
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number : "<<endl;
    cin>>iValue1;

    cout<<"Enter second number : "<<endl;
    cin>>iValue2;

    iRet = Multiply(iValue1, iValue2);

    cout<<"Multipliction is : "<<iRet<<endl;

    return 0;
}