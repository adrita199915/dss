#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;


    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insertlist(Node *&head, Node *&tail, int index, int val){
    Node *new_Node = new Node(val);


    if(head == NULL)
    {
        head = new_Node;
        tail = new_Node;
        cout<< head->val<<" "<< tail->val<< endl;
        return;
    }
    if(index == 0)
    {
        head->next = new_Node;
        head = new_Node;
    }
    else
    {
        tail->next = new_Node;
        tail = new_Node;
    }


    cout<< head->val<<" "<< tail->val<< endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;


    int n;
    cin>> n;


    while(n--){
        int ind, va;
        cin>> ind>> va;


        insertlist(head, tail, ind, va);
    }


    return 0;
}