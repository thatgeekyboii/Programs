#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};
void display(struct Array arr)
{
    int i;
    cout<<"the elements are"<<endl;
    for(i=0;i<arr.length;i++)
    cout<<arr.A[i]<<endl;

}

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Reverse(struct Array *arr)
{
    int *B;
    int i,j;
    B=(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++)
    B[j]=arr->A[i];
    for(i=0;i<arr->length;i++)
        arr->A[i]=B[i];
}

int main()
{
    struct Array arr1={{2,3,5,6,7,8,9},10,9};
    Reverse(&arr1);
    display(arr1);

    return 0;
}