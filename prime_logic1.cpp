#include<iostream>
using namespace std;
int main()
{
    int count=0,n;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==2)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"not prime";
    }
    

    return 0;
}