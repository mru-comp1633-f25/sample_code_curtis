#ifndef MYLIB_H
#define MYLIB_H

// constants
struct Node {
    int data;
    Node *next;
};

// function declarations
void linked_list_demo();
int length(const Node *head);
void print(const Node *head);
void insert(Node *&head, int value);
void remove(Node *&head, int value);

#endif // MYLIB_H
