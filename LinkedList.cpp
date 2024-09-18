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
    int i = 1;
    while(act != nullptr) {
        std::cout << i++ << " : "<<act->data << std::endl;
        act = act->next;
    }
}

void LinkedList::getRandValues(int cuantiti,bool c) {
    if(c) {
        for (int i = 0; i < cuantiti; i++) {
            int c = rand() % 100;
            addSorted(c);
        }
    }else {
        for (int i = 0; i < cuantiti; i++) {
            int c = rand() % 100;
            addHead(c);
        }
    }
}
void LinkedList::addSorted(int value) {

    if(size < 1) {return addHead(value);}
    LinkedNode *newNode = new LinkedNode(value);
    LinkedNode *act = head;
    LinkedNode *prev = nullptr;
    while(act!=nullptr) {

        if(value < act->data) {
            if (prev == nullptr) {
                return addHead(value);
            }
            prev->next = newNode;
            newNode->next = act;
            size++;
            break;
        } else if(value > act->data) {
            prev = act;
            act = act->next;
        } else {
            std::cout<<"el valor "<<value<<" ya esta tomado en cuenta"<<std::endl;
            return;
        }
    }
    prev->next = newNode;
    size++;
}


