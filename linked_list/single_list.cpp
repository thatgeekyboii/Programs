#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

//Node creation
struct node{
    int data;
    struct node *next;
};

// linked list operations
struct node *create_list(struct node *start);
struct node *add_beg(struct node *start,int data);
struct node *add_end(struct node *start,int data);
struct node *add_after(struct node *start,int data,int item);
struct node *add_before(struct node *start,int data,int item);
struct node *add_pos(struct node *start,int data,int pos);
struct node *del(struct node *start,int data);
struct node *reverse(struct node *start);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start,int data);

int main()
{
    struct node *start =NULL;
    int choice,data,item,pos;
    while(1)
    {
        cout<<"1. Create List"<<endl;
        cout<<"2. Display"<<endl;
        cout<<"3. Count"<<endl;
        cout<<"4. Search"<<endl;
        cout<<"5. Add to Empty List"<<endl;
        cout<<"6. Add at end"<<endl;
        cout<<"7. Add after node"<<endl;
        cout<<"8. Add before node"<<endl;
        cout<<"9. Add at position"<<endl;
        cout<<"10. Delete"<<endl;
        cout<<"11. Reverse"<<endl;
        cout<<"12. Quit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                start = create_list(start);
                break;
            case 2:
                display(start);
            case 3:
                count(start);
                break;
            case 4:
                cout<<"Enter the element to be searched";
                cin>>data;
                search(start,data);
                break;
            case 5:
                cout<<"Enter the element to be inserted";
                cin>>data;
                start = add_beg(start,data);
                break;
            case 6:
                cout<<"Enter the element to be inserted";
                cin>>data;
                start = add_end(start,data);
                break;
            case 7:
                cout<<"Enter the element to be inserted";
                cin>>data;
                cout<<"Enter the element after which to insert";
                cin>>item;
                start = add_after(start,data,item);
                break;
            case 8:
                cout<<"Enter the element to be inserted";
                cin>>data;
                cout<<"Enter the element before which to insert";
                cin>>item;
                start = add_before(start,data,item);
                break;
            case 9:
                cout<<"Enter the element";
                cin>>data;
                cout<<"Enter the position at which to be inserted";
                cin>>pos;
                start = add_pos(start,data,pos);
                break;
            case 10:
                cout<<"Enter the element to be inserted";
                cin>>data;
                start = del(start,data);
                break;
            case 11:
                start = reverse(start);
                break;
            case 12:
                exit(1);
            default:
                cout<<"Wrong Choice";

            }

    }
    return 0;
}


struct node *create_list(struct node *start)
{
    int data,n,i;
    cout<<"Enter the number of nodes";
    cin>>n;
    start =NULL;
    if(n==0)
        return start;
    cout<<"enter the element ot be inserted";
    cin>>data;
    start=add_beg(start,data);
    for(i=2;i<=n;i++)
        cout<<"Enter the element to be inserted";
        cin>>data;
        start = add_end(start,data);
    return start;
}

void display(struct node *start)
{
    struct node *p;
    if(start==NULL)
        cout<<"Empty List";
        return;
    p =start;
    cout<<"List is"<<endl;
    while(p!=NULL)
        cout<<" "<<p->data;
        p = p->next;
}

void search(struct node *start,int item)
{
    struct node *p= start;
    int pos =1;
    while(p!=NULL)
        if(p->data==item)
            cout<<"Element"<<item<<"found at"<<pos;
            return;
        p=p->next;
        pos++;
    cout<<"Item not found in the list";
}

struct node* add_beg(struct node *start,int data)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = start;
    start =temp;
    return start;
}

struct node *add_end(struct node*start,int data)
{
    struct node *p,*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    p=start;
    while(p->next!=NULL)
        p=p->next;
    p->next =temp;
    temp->next=NULL;
    return start;
}

struct node *add_after(struct node *start,int data,int item)
{
    struct node *temp,*p;
    p=start;
    while(p!=NULL)
    {
        if(p->data==item)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->data = data;
            temp->next = p->next;
            p->next =temp;
            return start;
        }
        p=p->next;

    }
    cout<<"element not present";
    return start;

}

struct node *add_before(struct node *start,int data,int item)
{
    struct node *temp,*p;
    if(start==NULL)
    {
        cout<<"Empty List";
        return start;
    }
    if(item == start->data)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->next =start;
        start=temp;
        return start;
    }
    p=start;
    while(p->next!=NULL)
    {
        if(p->next->data == item)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->data = data;
            temp->next = p->next;
            p->next = temp;
            return start;

        }
        p=p->next;
    }
    cout<<"Element not present";
    return start;
}

struct node *add_pos(struct node *start,int data,int pos)
{
    struct node *temp,*p;
    int i;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    if(pos==1)
    {
        temp->next=start;
        start=temp;
        return start;
    }
    p=start;
    for(i=1;i<pos-1 && p!=NULL;i++)
        p=p->next;
    if(p==NULL)
        cout<<"There are less elements";
    else
    {
        temp->next = p->next;
        p->next =temp;
    }
    return start;
}

struct node *del(struct node *start,int data)
{
    struct node *temp,*p;
    if(start == NULL)
    {
        cout<<"Empty List";
        return start;
    }
    if(start->data==data)
    {
        temp=start;
        start=start->next;
        free(temp);
        return start;
    }
    p=start;
    while(p->next!=NULL)
    {
        if(p->next->data == data)
        {
            temp = p->next;
            p->next =temp->next;
            free(temp);
            return start;
        }
        p=p->next;
    }
    cout<<"Element not found";
    return start;
}

struct node *reverse(struct node *start)
{
    struct node *prev,*ptr,*next;
    prev=NULL;
    ptr=start;
    while(ptr!=NULL)
    {
        next = ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=next;
    }
    start = prev;
    return start;
}

void count(struct node *start)
{
    struct node *p;
    int count=0;
    p=start;
    while(p!=NULL)
    {
        p=p->next;
        count++;
    }
    cout<<"Number of elements are"<<count;
    
}
