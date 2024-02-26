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

void deletePos(Node* &head, int pos) {

    if (head->next == NULL) {
        delete head;
        return;
    }
    if (pos == 1) {
        Node * deleteMe = head;
        head = head->next;
        delete deleteMe;
    }

   // traverse till the position
    Node* traverser = head;
    while (traverser->next->next != NULL && pos > 2) {
        traverser = traverser->next;
        pos--;
    } 

    // for the last position
    if (traverser->next->next == NULL) {
        delete traverser->next;
        traverser->next = NULL;
    }
    // if not first or last
    else {
        Node* deleteMe = traverser->next;
        traverser->next = deleteMe->next;
        delete deleteMe;
    }

}

void deleteValue(Node* &head, int val) {

    while(head->val == val) {
        deleteLeft(head);
        // return;
    }

    Node * traverser = head;
    while (traverser->next->next != NULL) {
        if (traverser->next->val == val) {
            Node* deleteMe = traverser->next;
            traverser->next = deleteMe->next;
            delete deleteMe;
        }
        else {
            traverser = traverser->next;
        }
    }

    if (traverser->next->next == NULL && traverser->next->val == val) {
            Node* deleteMe = traverser->next;
            traverser->next = deleteMe->next;
            delete deleteMe;
    }

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
    insertToLeft(head, 7);
    insertToLeft(head, 7);
    insertToLeft(head, 7);
    insertToLeft(head, 7);
    insertToLeft(head, 7);
    insertToLeft(head, 7);
    insertToLeft(head, 7);
    insertToLeft(head, 7);

    cout << "insert to left \n";
    print(head);

    insertToRight(head, 6);
    insertToRight(head, 5);
    insertToRight(head, 7);
    insertToRight(head, 7);
    insertToRight(head, 7);
    insertToRight(head, 7);

    cout << "insert to right \n";
    print(head);

    insertTo(head, 75, 1);
    insertTo(head, 100, 2);
    insertTo(head, 200, 9);
    insertTo(head, 300, 9);
    insertTo(head, 300, 90);

    cout << "insert to \n";
    print(head);

    deleteLeft(head);
    deleteLeft(head);

    cout << "delete left\n";
    print(head);

    deleteRight(head);
    deleteRight(head);

    cout << "delete right\n";
    print(head);

    deletePos(head,1);
    deletePos(head,2);
    deletePos(head,5);
    deletePos(head,5);

    cout << "delete pos\n";
    print(head);

    deleteValue(head, 8);
    deleteValue(head, 7);

    cout << "delete val\n";
    print(head);

    return 0;
}