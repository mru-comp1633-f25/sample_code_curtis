#include "mylib.h"
#include <iostream>
using namespace std;

int main() {
    // int n;
    // cout << "How many disks are you playing with? ";
    // cin >> n;

    // // move n disks from peg 1 to 3, using 2 as a spare
    // int moves = 0;
    // towers(n, 1, 3, 2, moves);

    Node *head = new Node;
    head->data = 1;
    head->next = new Node;
    head->next->data = 2;
    head->next->next = nullptr;

    cout << "List length: " << length(head) << endl;

    delete head->next;
    delete head;
    
    return 0;
}
