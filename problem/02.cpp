//list er duplicate value check
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
void insert_at_tail(Node * &head, int v)

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
 
    temp->next =newNode;
   
}
void print_linked_list(Node * head )
{
    cout<<"your linked list: " <<endl;
    Node*temp=head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void printduplicate(Node*head)
{
    Node *temp=head;
   while (temp!=NULL)
   {
    if(temp->val!=temp->next->val)
   {
     return ;
    }
    temp->next->val;
    temp=temp->next;
   }
}
int main()
{
    int va;
    Node*head=NULL;
    int count=0;
    while(true)
    {
        cin>>va;
        if(va==-1)
        {
            break;
        }
        else
        {
            insert_at_tail(head,va);
            count++;
        }

    }
    printduplicate(head);
    if(printduplicate)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}