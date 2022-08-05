/*
Write a generic program which accept one value and one number from user. print that value that number of times on screen.

Input : 'M', 7
Output : M  M   M   M   M   M   M

Input : 11, 4
Output : 11 11  11  11

Input : 21.22, 8
Output : 21.22  21.22   21.22   21.22   21.22   21.22   21.22   21.22
*/


#include<iostream>
using namespace std;

template<class T>

void Display(T Value, int iNo)
{
    int i = 0;
    for(i = 0; i < iNo; i++)
    {
        cout<<Value<<"\t";
    }
    cout<<endl;
}
int main()
{
    Display('M', 7);

    Display(11, 4);

    Display(21.22, 8);

    return 0;
}