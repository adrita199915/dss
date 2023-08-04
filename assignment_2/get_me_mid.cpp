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

void reverssort(Node *head){
    for(Node *i = head; i->next != NULL; i = i->next){


        for(Node *j = i->next; j != NULL; j = j->next){


            if(i->val < j->val){
                swap(i->val, j->val);
            }
        }
    }
}

int Nodesize(Node *head){
    Node *tmp  = head;
    int cnt = 0;


    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
     return cnt;
}

void printmid(Node *head){
    int size = Nodesize(head);
    int mid = (size+1)/2;


    Node* tmp = head;
    for(int i = 0; i < mid-1; i++){
        tmp = tmp->next;
    }
 
    if(size%2 == 0){
        cout<< tmp->val<<" "<< tmp->next->val;
    }
    else{
        cout<< tmp->val;
    }
}



int main(){
    Node *head = NULL;
    Node *tail = NULL;


    int va;
    cin>> va;


    while(va!= -1){
        inserttail(head, tail, va);
        cin>> va;
    }


    reverssort(head);
    printmid(head);
     
    return 0;
}











