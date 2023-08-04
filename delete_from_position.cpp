#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node*next;
       Node(int val)
       {
         this->val=val;
         this->next=NULL;
       }
};
void insert_at_tail(Node *&head, int v)
{
    Node * newNode = new Node(v);
if(head == NULL)
{
    head= newNode;
    return;
}
    Node * temp =head;
    while(temp->next != NULL)
    {
       temp=temp->next; 
    }
    //last loop
    temp->next =newNode;
    cout<<"inserted at tail"<<endl;
}
void print_linked_list(Node * head)
{
    cout<<"your linked list: " <<endl;
    Node*temp=head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void insert_at_position(Node*head,int pos,int v)
{
    Node*newNode=new Node(v);
    Node *temp=head;
    for( int i=1;i<= pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<"inserted at position:"<<pos<<endl;
}
void insert_at_head(Node *&head,int v)
{
    Node* newNode=new Node(v);
    newNode->next=head;
    head=newNode;
    cout<<"inserted at head:"<<endl;
}
void delete_from_position(Node*head, int pos)
{
    Node*temp=head;
    for( int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    Node*deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}
int main()
{
    Node* head = NULL;
   while(true)
   {
     cout<<"option 1: insert at tail"<<endl;
     cout<<"option 2: print linked list"<<endl;
    cout<<"option 3: insert at any position"<<endl;
    cout<<"option 4: insert at any head"<<endl;
    cout<<"option 5: delete from position"<<endl;
     cout<<"option 6: terminate"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {
          cout<<"please enter a value :";
          int v;
          cin>>v;
          insert_at_tail(head,v);
    }
    else if(op==2)
    {
    print_linked_list(head);
    }
    else if(op==3)
    {
        int pos,v;
        cout<<"enter position :  ";
        cin>>pos;
        cout<<"enter value :  ";
        cin>>v;
        if(pos==0)
        {
            insert_at_head(head,v);
        }
        else
        {
        insert_at_position(head,pos,v);
        }
    }
    else if(op==4)
    {
        int v;
        cout<<"enter value :  ";
        cin>>v;
        insert_at_head(head,v);
    }
    else if(op==5)
    {
        int pos;
        cout<<"enter position : ";
        cin>>pos;
        delete_from_position(head,pos);
    }
    else if(op==6)
    {
        break;
    }
   }
    return 0;
}