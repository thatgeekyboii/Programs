/*
Check whether a number is a happy number or not.
A number is Happy when the sum of the square of its digits is calculated 
and the procedure is repeated till the final number is 1.

If the whole procedure results to 1,then it is a happy number.

Eg. 23 is a Happy Number
    23 = 2^2 + 3^2 = 13
    13 = 1^2 + 3^2 = 10
    10 = 1^2 + 0 = 1

    Since the final output equals to 1.

    42 is not a Happy Number
    42 = 4^2 + 2^2 = 20
    20 = 2^2 + 0^2 = 4

    Since the final output is not equal to 0, therefore not a
    happy number.

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    int temp,sum=0;
    cout<<"enter a number";
    cin>>n;
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(n>0)
        {
            temp=n%10;
            sum+=(temp*temp);
            n=n/10;
        }
        n=sum;
    }
    if(sum==1)
        cout<<"Happy Number";
    else
        cout<<"Not a Happy Number";

    return 0;

}