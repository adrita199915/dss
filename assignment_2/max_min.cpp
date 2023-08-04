

#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;


    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *new_Node = new Node(val);


    if(head==NULL)
    {
        head = new_Node;
        tail = new_Node;
        return;
    }


    tail->next = new_Node;
    tail = new_Node;
}

void link_list(Node *head){
    int mi = INT_MAX;
    int ma = INT_MIN;
    Node *tmp = head;


    while (tmp != NULL)
    {
        mi = min(mi, tmp->val);
        ma = max(ma, tmp->val);
       
        tmp = tmp->next;
    }


    cout<< ma<< " "<< mi<< endl;
   
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;


    while(true)
    {
        int v;
        cin>> v;


        if(v == -1) break;


        insert_tail(head,tail,v);
    }


       link_list(head);


    return 0;
}