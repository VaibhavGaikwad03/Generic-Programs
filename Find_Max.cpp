//Write a generic program to find the largest number from three programs.

#include<iostream>
using namespace std;

template<class T>

T Maximum(T No1, T No2, T No3)
{
    T Max;

    if((No1 > No2) && (No1 > No3))
    {
        Max = No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        Max = No2;
    }
    else if((No3 > No1) && (No3 > No2))
    {
        Max = No3;
    }

    return Max;
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