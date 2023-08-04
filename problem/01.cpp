//size dekha
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

Node* buildLinkedList() {
    int data;
    Node* head = NULL;
    Node* tail = NULL;

    while (true) {
        cin >> data;
        if (data == -1) 
            break;

        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

// Function to calculate the size of the linked list
int getListSize(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    cout << "Enter elements of the linked list (-1 to terminate):" << endl;
    Node* head = buildLinkedList();
    
    int size = getListSize(head);
    cout << "Size of the linked list: " << size << endl;

   
    return 0;
}

 