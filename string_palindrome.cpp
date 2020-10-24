#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
    char a[100],b[200];
    cout<<"enter a string";
    cin>>a;
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    {
        cout<<"palindrome";
    }
    return 0;
}