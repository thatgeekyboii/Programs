// A spy number is a number where the sum of its digits is equal to the product of its digits.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int ld; //last digit
    int sum=0,prod=1;
    int t=n;
    while(n>0)
    {
        ld=n%10;
        sum=sum+ld;
        prod=prod*ld;
        n=n/10;
    }
    if(sum==prod)
        cout<<t<<" "<<"Is a Spy number";
    else 
        cout<<t<<" "<<"Is not a Spy number";
    return 0;
}