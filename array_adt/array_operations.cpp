#include<iostream>
using namespace std;
class Array
{
    private:
    int *A;
    int size;
    int length;
    
    public:
    Array()
    {
        size=10;
        length=0;
        A=new int[10];
    }
    Array(int sz)
    {
        size=sz;
        length=0;A=new int[size];
    }
    ~Array()
    {
        delete []A;  
    }
};

int main()
{
    return 0;
}   