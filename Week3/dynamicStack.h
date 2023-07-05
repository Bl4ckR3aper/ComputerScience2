//
// Created by Arav Tuteja on 7/4/23.
//

#ifndef COMPUTERSCIENCE2_DYNAMICSTACK_H
#define COMPUTERSCIENCE2_DYNAMICSTACK_H

#include <iostream>


class dynamicStack {
private:
    struct node
    {
        std::string data;
        struct node *next;
    };

    node* head = nullptr;
public:
    void display();
    void push(std::string element);
    void pop();
};


#endif //COMPUTERSCIENCE2_DYNAMICSTACK_H
