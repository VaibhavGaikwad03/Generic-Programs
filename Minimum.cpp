//Write a generic program to accept N numbers from user and return largest value.

#include<iostream>
using namespace std;

template<class T>

T Minimum(T Arr[], int iSize)
{
    int i = 0;
    T Min = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Min > Arr[i])
        {
            Min = Arr[i];
        }
    }
    return Min;
}

int main()
{
    int iArr[5] = {15, 21, 51, 101, 111};

    int iRet = Minimum(iArr, 5);
    cout<<"Minimum number is : "<<iRet<<endl;

    float fArr[5] = {121.12, 21.45, 51.47, 101.16, 75.26};

    float fRet = Minimum(fArr, 5);
    cout<<"Minimum number is : "<<fRet<<endl;

    return 0;
}