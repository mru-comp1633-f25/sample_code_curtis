#ifndef MYLIB_H
#define MYLIB_H

// constants
struct Node {
    int data;
    Node *next;
};

// function declarations
void pointer_problems_demo();
void linked_list_demo();

void print(const Node *head);

#endif // MYLIB_H
