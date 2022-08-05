//Write a generic program to find the largest number from three programs.

#include<iostream>
using namespace std;

template<class T>

T Maximum(T iNo1, T iNo2, T iNo3)
{
    T iMax;

    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        iMax = iNo1;
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        iMax = iNo2;
    }
    else if((iNo3 > iNo1) && (iNo3 > iNo2))
    {
        iMax = iNo3;
    }

    return iMax;
}

int main()
{
    int iRet = Maximum(10, 20, 15);
    cout<<"Maximum number is : "<<iRet<<endl;

    float fRet = Maximum(11.25, 45.12, 36.20);
    cout<<"Maximum number is : "<<fRet<<endl;

    char cRet = Maximum('A', 'J', 'F');
    cout<<cRet<<endl;

    return 0;
}