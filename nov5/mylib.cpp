#include "mylib.h"
#include <iostream>
using namespace std;

void pointer_problems_demo() {
    // memory leak
    int *p1 = new int;

    // dangling pointer
    int *p2 = new int;
    delete p2;

    // double delete
    int *p3 = new int;
    delete p3;
//    delete p3;

    *p2 = 5; // no longer valid memory
    
    cout << "The values are: "
         << "p1: " << *p1 << endl
         << "p2: " << *p2 << endl
         << "p3: " << *p3 << endl;

    // delete on the stack
    int *p4;
    delete p4;
}

void linked_list_demo() {
    Node *head = nullptr;
    print(head);
    
    // first element
    head = new Node;
    head->data = 1;
    head->next = nullptr;

    print(head);
    // second element
    head->next = new Node;
    head->next->data = 2;
    head->next->next = nullptr;

    print(head);
    // zeroth element
    Node *temp = new Node;
    temp->data = 0;
    temp->next = head;
    head = temp;

    print(head);
    // indicate we're done with temp
    temp = nullptr;
    
}

void print(const Node *head) {
    const Node* travel = head;
    cout << "[";
    while (travel) {
        cout << travel->data << " ";
        travel = travel->next;
    }
    cout << "]" << endl;
}
    
