//
// Created by Arav Tuteja on 7/4/23.
//

#include "dynamicStack.h"

void dynamicStack::push(std::string element) {
    node* newNode = new node();
    newNode->data = element;
    newNode->next = head;
    head = newNode;
}

void pop() {

}