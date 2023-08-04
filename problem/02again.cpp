#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

void countFreq(struct Node* head)
{
    unordered_map<int, int> freq;
    struct Node* ptr = head;
    while (ptr != NULL) {
        freq[ptr->data]++;
        ptr = ptr->next;
    }
    for (auto x : freq) {
        cout << x.first << " " << x.second << endl;
    }
}

int main()
{
    struct Node* head = NULL;

    

    cout << "Linked List: ";
    printList(head);

    cout << "\nFrequency of each element:\n";
    countFreq(head);

    return 0;
}
