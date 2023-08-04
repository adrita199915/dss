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
int listequal(Node*head1,Node*head2)
{
    while(head1!=NULL && head2!=NULL)
    {
    if(head1->val!=head2->val)
    {
        return 0;
    }
    head1=head1->next;
    head2=head2->next;
    }
    return head1==NULL&& head2==NULL;
}
int main()
{
   Node*head1=NULL;
   Node*head2=NULL;
   int v;
   while(true)
   {
    cin>>v;
    if(v==-1)
    {
        break;
    }
    Node*newNode=new Node(v);
    if(head1==NULL)
    {
        head1=newNode;
    }
    else
    {
        Node*tem=head1;
        while(tem->next!=NULL)
        {
            tem=tem->next;
            tem->next=newNode;
        }
    }
   } 
    while(true)
   {
    cin>>v;
    if(v==-1)
    {
        break;
    }
    Node*newNode=new Node(v);
    if(head2==NULL)
    {
        head2=newNode;
    }
    else
    {
        Node*tem=head2;
        while(tem->next!=NULL)
        {
            tem=tem->next;
            tem->next=newNode;
        }
    }
   }
   if(listequal(head1,head2))
   {
    cout<<"YES";
   }
   else
   {
    cout<<"NO";
   }
    return 0;
}