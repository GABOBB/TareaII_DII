//
// Created by gbb on 15/09/24.
//

#include "LinkedList.h"

#include <iostream>

void LinkedList::addHead(int value) {
    auto* newNode = new LinkedNode(value);
    if(size < 1) {
        head = newNode;
    }else {
        newNode->next = head;
        head = newNode;
    }
    size++;
}
void LinkedList::Print() const {
    LinkedNode *act = head;
    for(int i = 1; i <= size; i++) {
        std::cout << i << " : "<<act->data << std::endl;
        act = act->next;
    }
}

void LinkedList::getRandValues(int cuantiti) {
    for (int i = 0; i < cuantiti; i++) {
        int c = rand() % 100;
        addHead(c);
    }
}

