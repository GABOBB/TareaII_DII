//
// Created by gbb on 15/09/24.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <random>
struct LinkedNode {
    int data;
    LinkedNode *next;
};

class LinkedList {
    int size = 0;
    LinkedNode *head;
    public:

    LinkedList()=default;
    ~LinkedList()=default;
    void getRandValues(int cuantiti);
    void addHead(int value);
    void Print()const;
    void addSorted(int value);
};



#endif //LINKEDLIST_H
