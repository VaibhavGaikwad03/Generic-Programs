/*
Write a generic program which accept N values and count frequency of any specific value.

Input : 10 20 30 10 30 40 10 40 10
Value to check frequency : 10
Output : 4
*/

#include<iostream>
using namespace std;

template<class T>

int Frequency(T Arr[], int iSize, T Value)
{
    int Count = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == Value)
        {
            Count++;
        }
    }
    return Count;
}
int main()
{
    int iArr[6] = {10, 20, 30, 10, 30, 40};

    int iRet = Frequency(iArr, 6, 10);
    cout<<"Frequency of that number is : "<<iRet<<endl;

    char cArr[6] = {'F', 'W', 'F', 'A', 'F', 'V'};
    iRet = Frequency(cArr, 6, 'F');
    cout<<"Frequency of that character is : "<<iRet<<endl;

    return 0;
}