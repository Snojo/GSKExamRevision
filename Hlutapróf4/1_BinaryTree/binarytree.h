#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <vector>
using namespace std;

// Used as a character for unused entries in the vector based binary tree (see the main program)
const char NULL_CHAR = '\0';

class BinaryTree {
    public:
        BinaryTree(vector<char> aVector) : myVector(aVector) {}
        int height() const;     // Returns the height of the tree
        int size() const;       // Returns the number of nodes in the tree
        void inorder() const;   // Traverses the tree in inorder
        void preorder() const;  // Traverses the tree in preorder
        void postorder() const; // Traverses the tree in postorder
        bool empty() const;     // Returns true if the tree is empty
    private:
        // Returns the position of the root
        int getRootPos() const;
        // Returns the height of the tree starting at the given pos
        int height(int pos) const;
        // Returns the number of nodes in the tree starting at the given pos
        int size(int pos) const;
        // Traverses the tree in inorder starting at the given pos
        void inorder(int pos) const;
        // Traverses the tree in preorder starting at the given pos
        void preorder(int pos) const;
        // Traverses the tree in postorder starting at the given pos
        void postorder(int pos) const;
        // Returns the position of the left child v given the position of the parent u
        int leftChild(int pos) const;
        // Returns the position of the right child v given the position of the parent u
        int rightChild(int pos) const;
        // Checks to see if a position represents a leaf
        bool isLeaf(int pos) const;
        // The vector-based structure for a binary tree
        vector<char> myVector;
};

#endif // BINARYTREE_H
