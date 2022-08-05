//Write a generic program to accept N numbers from user and return largest value.

#include<iostream>
using namespace std;

template<class T>

T Maximum(T Arr[], int iSize)
{
    int i = 0;
    T Max = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Max < Arr[i])
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    int iArr[5] = {11, 21, 51, 101, 111};

    int iRet = Maximum(iArr, 5);
    cout<<"Maximum number is : "<<iRet<<endl;

    float fArr[5] = {11.12, 21.45, 51.47, 101.16, 75.26};

    float fRet = Maximum(fArr, 5);
    cout<<"Maximum number is : "<<fRet<<endl;

    return 0;
}