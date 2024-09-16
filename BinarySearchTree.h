//
// Created by gbb on 15/09/24.
//

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
struct BinaryNode {
    BinaryNode *left;
    BinaryNode *right;
    int value;
};

class BinarySearchTree {
    BinaryNode *root;
    int size;

    public:
    BinarySearchTree();
    ~BinarySearchTree();

    void insert(int value);
    void Print() const;



};



#endif //BINARYSEARCHTREE_H
