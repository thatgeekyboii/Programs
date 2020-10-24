#include<iostream>
using namespace std;

int lengths(char input[])
{
    int count=0;
    for(int i=0;input[i]!= '\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[100];
    cout<<"enter the name";
    cin>>name;

    cout<<"length is"<<lengths(name);

    return 0;
}