#include <iostream>
#include <algorithm>    // For the max function
#include "binarytree.h"
using namespace std;

int BinaryTree::getRootPos() const {
    return 1;
}

bool BinaryTree::empty() const {
    // Your implementation
}

int BinaryTree::leftChild(int pos) const {
    // Your implementation
}

int BinaryTree::rightChild(int pos) const {
    // Your implementation
}

bool BinaryTree::isLeaf(int pos) const {
    // Your implementation
}

int BinaryTree::height() const {    // Returns the height of the tree
    // Your implementation
}

int BinaryTree::height(int pos) const  { // Returns the height of the tree starting at pos
    // Your implementation
    // Should be recursive
    // You can use the max<int>(x,y) function from algorithm

}

int BinaryTree::size() const { // Returns the number of nodes in the tree
    // Your implementation
}

int BinaryTree::size(int pos) const { // Returns the number of nodes in the tree starting at the given node
    // Your implementation
    // Should be recursive
}

void BinaryTree::inorder() const { // Traverses the tree in inorder
    // Your implementation
}


void BinaryTree::preorder() const { // Traverses the tree in preorder
    // Your implementation
}

void BinaryTree::postorder() const { // Traverses the tree in postorder
    // Your implementation
}

void BinaryTree::inorder(int pos) const { // Traverses the tree in inorder starting at the given pos
    // Your implementation
    // Should be recursive
}

void BinaryTree::preorder(int pos) const { // Traverses the tree in preorder starting at the given pos
    // Your implementation
    // Should be recursive
}

void BinaryTree::postorder(int pos) const { // Traverses the tree in postorder starting at the given pos
    // Your implementation
    // Should be recursive
}
