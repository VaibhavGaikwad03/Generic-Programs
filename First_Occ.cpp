/*
Write a generic program which accept N values and search the first occurence of any specific value.

Input : 10 20 30 10 30 40 10 40 10
Value to check frequency : 40
Output : 6
*/

#include<iostream>
using namespace std;

template<class T>

int FirstOcc(T Arr[], int iSize, T Value)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == Value)
        {
            break;
        }
    }
    return i+1;
}
int main()
{
    int iArr[6] = {10, 20, 30, 10, 30, 40};

    int iRet = FirstOcc(iArr, 6, 30);
    cout<<"First occurence is at index : "<<iRet<<endl;

    char cArr[6] = {'F', 'W', 'F', 'A', 'F', 'V'};
    iRet = FirstOcc(cArr, 6, 'A');
    cout<<"First occurence is at index : "<<iRet<<endl;

    return 0;
}