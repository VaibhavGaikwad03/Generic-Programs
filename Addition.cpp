//Write a generic program to find the largest number from three programs.

#include<iostream>
using namespace std;

template<class T>

T Addition(T Arr[], int iSize)
{
    int i = 0;
    T Sum = 0;

    for(i = 0; i < iSize; i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}

int main()
{
    int iArr[5] = {11, 21, 51, 101, 111};

    int iRet = Addition(iArr, 5);
    cout<<"Addition is : "<<iRet<<endl;

    float fArr[5] = {11.32, 21.15, 51.45, 101.47, 111.15};

    float fRet = Addition(fArr, 5);
    cout<<"Addition is : "<<fRet<<endl;

    return 0;
}