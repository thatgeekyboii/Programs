#include<iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    cout<<"elements are";
}

void append(struct Array *arr,int x)
{ 
    if(arr->length<arr->size)
    arr->A[arr->length++]=x;
}

void insert(struct Array *arr,int index,int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>index;i--)
        arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
    }
}
int main()
{
struct Array arr={{2,4,6,8},10,5};

append(&arr,10);
insert(&arr,0,12);
display(arr);
    return 0;
}