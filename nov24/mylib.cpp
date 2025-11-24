#include "mylib.h"
#include <iostream>
using namespace std;

int length(const Node *head) {
    // base case
    if (!head) {
        return 0;
    } else {
        // recursive case
        // reduce with head->next
        return 1 + length(head->next);
    }
}

void towers(int n, int src, int dest, int spare, int &moves) {
    if (n == 1) {
        moves++;
        // base case
        cout << "Move " << moves << ": move disk from peg "
             << src << " to " << dest << endl;
    } else {
        // recursive case
        // move all the disks on top of the target
        towers(n - 1, src, spare, dest, moves);
        // move the target disk
        towers(1, src, dest, spare, moves);
        // move the rest of the stack on top of the target
        towers(n - 1, spare, dest, src, moves);
    }
}

