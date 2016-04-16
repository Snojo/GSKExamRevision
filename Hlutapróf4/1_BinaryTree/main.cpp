#include <iostream>
#include "binarytree.h"
using namespace std;

void testTree(vector<char>& v) {
    BinaryTree tree(v);

    cout << "Height: " << tree.height() << endl;
    cout << "Number of nodes: " << tree.size() << endl;
    cout << "Inorder: ";
    tree.inorder();
    cout << endl;
    cout << "Preorder: ";
    tree.preorder();
    cout << endl;
    cout << "Postorder: ";
    tree.postorder();
    cout << endl << endl;
}

int main() {

    // The first test tree is an empty tree
    vector<char> emptyTree;
    testTree(emptyTree);

    // The next test tree looks like this (just a root):
    //             +
    //
    vector<char> smallTree {NULL_CHAR, '+'};
    testTree(smallTree);

    /* The next test tree looks like this:
                  +
                /    \
               *      -
              / \    / \
             6  2   5   3
    */
    vector<char> largerTree {NULL_CHAR, '+', '*', '-', '6', '2', '5', '3'};
    testTree(largerTree);

    /* The final test tree looks like this:
                   +
                 /   \
               *      +
              / \    / \
             +   4   -  2
            / \     / \
           3   1   9   5
    */
    vector<char> largestTree {NULL_CHAR, '+', '*', '+', '+', '4', '-', '2', '3', '1', NULL_CHAR, NULL_CHAR, '9', '5'};
    testTree(largestTree);

    return 0;
}
