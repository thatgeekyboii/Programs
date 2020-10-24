#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int sum=0;
    int num=n*n;
    while(num>0)
    {
        sum=sum+num%10;
        num=num/10;

    }
    if(sum==n)
    {
        cout<<"neon";
    }
    else
    {
        cout<<"not num";
    }
    
    return 0;
}