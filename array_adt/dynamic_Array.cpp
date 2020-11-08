#include<iostream>
using namespace std;

class DynamicArray{
    int *data;
    int nextIndex;
    int capacity;

    public:
    DynamicArray(){
        data = new int[5];
        nextIndex =0;
        capacity=5;
    }

    DynamicArray(DynamicArray const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        //this->data = d.data;

        // deep copy constructor

        this->data = new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++)
        {
            this->data[i] = d.data[i];
        }

    }
    void add(int element){
        if(nextIndex==capacity)
        {
            int *newData = new int[capacity *2];
            for(int i=0;i<capacity;i++)
            {
                newData[i] = data[i];

            }
            delete []data;
            data=newData;
            capacity = capacity*2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    
    void operator=(DynamicArray const &d)
    {
          this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        //this->data = d.data;

        // deep copy constructor

        this->data = new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++)
        {
            this->data[i] = d.data[i];
        }

    }
    void add(int element,int i)
    {
        if(i<nextIndex)
            data[i] = element;
        else if(i==nextIndex)
            add(element);
        else
            return;

    }
    int get(int i)
    {
        if(i>=0 && i<nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
        
    }

    void print()
    {
        for(int i=0;i<nextIndex;i++)
        {
            cout<<data[i]<<" ";
        }
    }
    int getCapacity()
    {
        return capacity;
    }
};
int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);

    d1.print();
    cout<<endl;
    cout<<d1.getCapacity()<<endl;

    DynamicArray d2(d1);
    DynamicArray d3;
    d3=d1;
    d1.add(100,0);
    d1.print();
    cout<<endl;
    d2.print();
    cout<<endl;
    d3.print();

   
    

    return 0;
}