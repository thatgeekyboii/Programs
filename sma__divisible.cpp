// smallest number such that sum of digits is N and it is divisible by 10^N

#include<iostream>
using namespace std;
void digitsNum(int N)
{
    if(N==0)
        cout<<"0";
    if(N % 9 != 0 )
        cout<<(N%9);
    for(int i=1;i<=(N/9);++i)
        cout<<9;

}
int main()
{
    int N=5;
    cout<<"number is";
    digitsNum(N);        
    return 0;
}