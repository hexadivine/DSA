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
}

int main() {

    Node* head = new Node(10);

    return 0;
}