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
int isSorted(struct Array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        return 0;
    }
    return 1;
}

int main()
{
    struct Array arr1={{2,3,5,6,7,8,9},10,9};
    cout<<isSorted(arr1);
    display(arr1);
    return 0;
}