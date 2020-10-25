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
    cout<<"the elements are";
    for(i=0;i<arr.length;i++)
    cout<<arr.A[i]<<" ";
}

void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++]=x;
    }
}

void Insert(struct Array *arr,int index,int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length-1;i>index;i++)
        {
            arr->A[i]=arr->A[i-1];
            arr->A[index]=x;
            arr->length++;
        }
    }
}

int Delete(struct Array *arr,int index)
{
        int x=0;
        int i;
        if(index>=0 && index<arr->length)
        {
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
        arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;

        }
        return 0;
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int LinearSearch(struct Array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }

    }
    return -1;
    
}
int main()
{
    return 0;
}