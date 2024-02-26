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

    insertToLeft(head, 6);
    insertToLeft(head, 5);

    print(head);

    return 0;
}