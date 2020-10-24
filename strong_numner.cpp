// a number whose factorial of digits is same

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int original_number,lastDigit,sum=0;
    original_number=n;
    int fact;

    while(n>0)
    {
        lastDigit=n%10;
        fact=1;

        for(int i=1;i<=lastDigit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
        
    }
    if(sum==original_number)
    {
        cout<<"perfect";
    }
    else
    {
        cout<<"not perfect";
    }
    
    
    return 0;
}