#ifndef MYLIB_H
#define MYLIB_H

// constants

struct Node {
    int data;
    Node *next;
};

// function declarations
int length(const Node *head);

// move n disks from src to dest, using spare as a spare
void towers(int n, int src, int dest, int spare, int &moves);

#endif // MYLIB_H
