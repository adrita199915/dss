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

int sizecount(Node *head)
{
    Node *tmp = head;


    int cn = 0;
    while(tmp != NULL)
    {
        cn++;
        tmp = tmp->next;
    }
    return cn;
}


int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;


    int va1;
    int va2;
   
    while(true)
    {
        cin>> va1;
        if(va1 == -1){
            break;
        }
        inserttail(head1, tail1, va1);
    }


    while(true){
        cin>> va2;


        if(va2 == -1){
            break;
        }
        inserttail(head2, tail2, va2);
    }




    Node *first = head1;
    Node *second = head2;


    bool flag = true;
    while(first != NULL && second!=NULL){


        if(first->val != second->val){
            flag = false;
            break;
        }


        first = first->next;
        second = second->next;
    }


    int cn1 = sizecount(head1);
    int cn2 = sizecount(head2);


    if(flag == true && cn1 == cn2){


        cout<< "YES"<< endl;
    }
    else{


        cout<< "NO"<< endl;
    }


    return 0;
}

