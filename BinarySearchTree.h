//
// Created by gbb on 15/09/24.
//

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
class BinaryNode {
    public:
    BinaryNode *left;
    BinaryNode *right;
    int value;

    BinaryNode(int value, BinaryNode *left = nullptr, BinaryNode *right = nullptr)
        : left(left), right(right), value(value) {}
};

class BinarySearchTree {
    BinaryNode *root;
    int size;

    public:

    BinarySearchTree():size(0),root(nullptr) {};


    void insert(int value);
    void Delete(int value);
    BinaryNode* deleteNode(BinaryNode* node, int value);
    BinaryNode* findMin(BinaryNode* node) const;


    void Printaux(BinaryNode *node)const;
    void Print()const;



};



#endif //BINARYSEARCHTREE_H
