#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    // Creating nodes
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    // Traversing the linked list
    cout << "Linked list elements are: ";
    Node* current = head;
    while(current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Freeing allocated memory
    current = head;
    Node* nextNode;
    while(current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}