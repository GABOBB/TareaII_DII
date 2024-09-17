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

    /*
    auto *newNode = new LinkedNode(value);
    if(size < 1) {
    std::cout << value <<" hola hola hola"<< std::endl;
        head = newNode;
    }else {
        LinkedNode *past = nullptr;
        LinkedNode *act = head;
        for(int i = 0; i <= size-1; i++) {
            std::cout << (value < act->data)<<"  "<<value<<" "<<act->data<<std::endl;
            if(value < act->data) {
                past = act;
                act = act->next;
            }else if(value >act->data) {
                past->next = act->next;
                delete act;
                break;
            } else {
                std::cout << "dicho valor ya se encunetra en la lista por lo que no se agrega" << std::endl;
                break;
            }
        }
    }
    size++;
*/
}


