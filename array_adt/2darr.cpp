#include<iostream>
using namespace std;

void display(int b[][3],int r,int c)
{
    cout<<"row wise printing"<<endl;
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }


}
int main()
{
    int a[100][100];
    int b[][3]={{1,2,3},{3,4,5},{5,6,7}};
    int r,c;
    cout<<"enter the number of rows and columns";
    cin>>r>>c;

    cout<<"enter the array elements"<<endl;
    //input of the array
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    //row wise printing
    cout<<"row wise printing"<<endl;
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n";

    // column wise printing
    cout<<"column wise printing"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<a[i][j]<<"\t";

        }
        cout<<endl;
    }

    display(b,3,3);
    return 0;
}