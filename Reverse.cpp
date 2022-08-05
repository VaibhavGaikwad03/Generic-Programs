/*
Write a generic program which accept N values and reverse the contents.

Input : 10 20 30 10 30 40 10 40 10
Output : 10 40 10 40 30 10 30 20 10
*/

#include<iostream>
using namespace std;

template<class T>

void Reverse(T Arr[], int iSize)
{
    T temp;
    int i = 0, j = 0;

    for(i = 0, j = iSize-1; i < iSize/2; i++, j--)
    {
        temp = Arr[i];
        Arr[i] = Arr[j];
        Arr[j] = temp;
    }
}

int main()
{
    int iArr[6] = {10, 20, 30, 10, 30, 40};
    Reverse(iArr, 6);

    for(int i = 0; i < 6; i++)
    {
        cout<<iArr[i]<<endl;
    }

    char cArr[6] = {'F', 'W', 'F', 'A', 'F', 'V'};

    Reverse(cArr, 6);

    for(int i = 0; i < 6; i++)
    {
        cout<<cArr[i]<<endl;
    }

    return 0;
}