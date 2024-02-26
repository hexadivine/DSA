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

Node* insertToLeft(Node* head, int val) {

    Node* temp = new Node(val);
    temp->next = head;
    head = temp;

    return head;

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

    head = insertToLeft(head, 9);
    head = insertToLeft(head, 8);
    head = insertToLeft(head, 7);

    print(head);

    head = insertToLeft(head, 6);
    head = insertToLeft(head, 5);

    print(head);

    return 0;
}