#include "mylib.h"
#include <iostream>
using namespace std;

void linked_list_demo() {
    Node *head = nullptr;
    print(head);
    cout << "length: " << length(head) << endl;

    remove(head, 5); // remove from empty list
    
    insert(head, 0);
    insert(head, 5);
    insert(head, 1);
    insert(head, 2);
    
    print(head);
    
    // show the length to test the function
    cout << "length: " << length(head) << endl;

    remove(head, 1);
    print(head);

    remove(head, 0);
    remove(head, 10);
    remove(head, 2);
    remove(head, 5);
    print(head);
}

void print(const Node *head) {
    const Node* travel = head;
    cout << "[";
    while (travel) {
        cout << travel->data;
        if (travel->next) {
            cout << ",";
        }
        travel = travel->next;
    }
    cout << "]" << endl;
}
    
int length(const Node *head) {
    const Node *cur = head;
    int len = 0;
    while (cur) {
        ++len;
        cur = cur->next;
    }
    return len;
}

void insert_v1(Node *&head, int value) {
    Node *new_node = new Node;
    new_node->data = value;

    // special case: empty list
    if (!head) {
        head = new_node;
        head->next = nullptr;
        return;
    } // or else to avoid early return
    
    Node *cur = head;
    // find the previous node
    while (cur->next && cur->next->data < value) {
        cur = cur->next;
    }
    new_node->next = cur->next;
    cur->next = new_node;
}

void insert(Node *&head, int value) {
    // version 2
    Node *new_node = new Node;
    new_node->data = value;

    Node *prev = nullptr;
    Node *cur = head;
    while (cur && cur->data < value) {
        prev = cur;
        cur = cur->next;
    }
    // special case: inserting at head
    if (!prev) {
        new_node->next = head;
        head = new_node;
    } else {
        new_node->next = prev->next;
        prev->next = new_node;
    }
}

void remove(Node *&head, int value) {
    // guard against empty list
    if (!head) {
        return;
    }

    Node *prev = nullptr;
    Node *cur = head;
    while (cur && cur->data != value) {
        prev = cur;
        cur = cur->next;
    }
    
    // make sure we found something to remove
    if (cur) {
        // special case: removing head
        if (!prev) {
            head = cur->next;
        } else {
            // disconnect from the chain
            prev->next = cur->next;
        }

        // either way, delete the node
        delete cur;
    }
}
