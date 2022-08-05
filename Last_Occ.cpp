/*
Write a generic program which accept N values and search the last occurence of any specific value.

Input : 10 20 30 10 30 40 10 40 10
Value to search : 30
Output : 5
*/

#include<iostream>
using namespace std;

template<class T>

int LastOcc(T Arr[], int iSize, T Value)
{
    int LastOcc = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == Value)
        {
            LastOcc = i;
        }
    }
    return LastOcc+1;
}
int main()
{
    int iArr[6] = {10, 20, 30, 10, 30, 40};

    int iRet = LastOcc(iArr, 6, 30);
    cout<<"Last occurence is at index : "<<iRet<<endl;

    char cArr[6] = {'F', 'W', 'F', 'A', 'F', 'A'};
    iRet = LastOcc(cArr, 6, 'A');
    cout<<"Last occurence is at index : "<<iRet<<endl;

    return 0;
}