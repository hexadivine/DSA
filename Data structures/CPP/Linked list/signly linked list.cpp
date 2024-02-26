#include<iostream>
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

void insertToLeft(Node* &head, int val) {

    // create temp node
    Node* temp = new Node(val);
    // assign
    temp->next = head;
    // head should be to the left most side
    head = temp;

}

void insertToRight(Node* &head, int val) {

    Node* traverser = head;

    // move to the end
    while(traverser->next != NULL) 
        traverser = traverser->next;
    
    // create temp node
    Node* temp = new Node(val);
    // assign
    traverser->next = temp;

}

void print(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    Node* head = new Node(10);

    insertToLeft(head, 9);
    insertToLeft(head, 8);
    insertToLeft(head, 7);

    print(head);

    insertToRight(head, 6);
    insertToRight(head, 5);

    print(head);

    return 0;
}