#include<iostream>
using namespace std;

// node creation
class Node {
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            this->next = NULL;
        }
};

// Insert operations
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

void insertTo(Node* &head, int val, int pos) {

    // check for 0 & -ve pos
    if(pos<=0) {
        cout << "Position cannot be 0 or negative";
        return;
    }

    // for the first position
    if (pos == 1) {
        insertToLeft(head, val);
        return;
    }

    // traverse till the position
    Node* traverser = head;
    while (traverser->next != NULL && pos > 2) {
        traverser = traverser->next;
        pos--;
    } 

    Node* temp = new Node(val);
    // for the last position
    if (traverser->next == NULL) {
        traverser->next = temp;
    }
    // if not first or last
    else {
        temp->next = traverser->next;
        traverser->next = temp;
    }

}

// Delete operations
void deleteLeft(Node* &head) {

    if (head->next == NULL) {
        delete head;
        return;
    }

    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;

}

void deleteRight(Node* &head) {

    if (head->next == NULL) {
        delete head;
        return;
    }
    Node* traverser = head;
    while(traverser->next->next != NULL ) {
        traverser = traverser->next;
    }

    delete traverser->next;
    traverser->next = NULL;

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

    insertTo(head, 75, 1);
    insertTo(head, 100, 2);
    insertTo(head, 200, 9);
    insertTo(head, 300, 9);
    insertTo(head, 300, 90);

    print(head);

    deleteLeft(head);
    deleteLeft(head);

    print(head);

    deleteRight(head);
    deleteRight(head);

    print(head);

    return 0;
}