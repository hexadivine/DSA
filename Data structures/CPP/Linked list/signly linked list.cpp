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

    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    
}

int main() {

    Node* head = new Node(10);

    cout << head->val << endl;
    cout << head->next;

    return 0;
}