/*
Disarium number is a number if the sum of the digits powered with 
their respective positions is equal to the number itself.

Eg. 89 is a Disarium Number
    89 = 8^1 + 9^2 = 89

    45 is not a Disarium Number
    45 = 4^1 + 5^2 = 29
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,ld,sum=0,digit_count=0; //ld is last digit
    int temp;
    cout<<"enter a number";
    cin>>n;

    //counting the number of digits
    temp=n;
    while(temp!=0)
    {
        temp = temp/10;
        digit_count++;
    }

    temp=n;
    while(temp!=0)
    {
        ld=temp%10;
        sum=sum+pow(ld,digit_count);
        temp=temp/10;
        digit_count--;
    }
    if(sum==n)
        cout<<"Disarium";
    else
        cout<<"Not Disarium";
    return 0;
}