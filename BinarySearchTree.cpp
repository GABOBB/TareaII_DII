//
// Created by gbb on 15/09/24.
//

#include "BinarySearchTree.h"
void BinarySearchTree::insert(int value) {
    auto* NewNode = new BinaryNode();
    if(root == nullptr) {
        root = NewNode;
    }else {
        BinaryNode *act = root;
        BinaryNode *parent = nullptr;
        bool side;
        while(act != nullptr) {
            if(value < act->value) {
                parent = act;
                act = act->left;
                side = true;
            }else {
                parent = act;
                act = act->right;
                side = false;
            }
            if(side) {
                parent->left = NewNode;
            }else {
                parent->right = NewNode;
            }
            size++;
        }

    }
}
void BinarySearchTree::Print() const {
    BinaryNode *p = nullptr;
    BinaryNode *son = root;
    if(son == nullptr) {

    }

}
