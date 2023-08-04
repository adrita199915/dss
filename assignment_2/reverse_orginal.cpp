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

void inserttail(Node *&head , Node *&tail , int val){
    Node *new_Node = new Node(val);


    if(head == NULL){
        head = new_Node;
        tail = new_Node;
        return;
    }


    tail->next = new_Node;
    tail = new_Node;
}

void mainlist(Node *head){
    Node *tmp = head;


    while (tmp != NULL){
        cout<< tmp->val<< " ";
        tmp = tmp->next;
    }
}
void reverslist(Node *head){


    if(head==NULL){
        return;
    }


    reverslist(head->next);
    cout<< head->val<<" ";


}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;


    int va;
    while(true)
    {
        cin>> va;


        if(va == -1)
        {
            break;
        }


        inserttail(head, tail, va);
    }


    reverslist(head);
    cout << endl;
    mainlist(head);


    return 0;
}
