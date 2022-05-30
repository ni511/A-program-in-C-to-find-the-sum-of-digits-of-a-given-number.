//Write a program in C++ to find the sum of digits of a given number.
#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,i=1,a;
    cout<<"Enter the no. of element:\n";
    cin>>n;
    cout<<"Enter the no.'s in them:\n";
    while(i<=n)
    {
        cin>>a;
        sum=sum+a;
        i++;
    }
    cout<<"The sum of numbers is:\n"<<sum;
    return 0;
}