//
// Created by Aksza on 10/18/2022.
//

#ifndef CPP_2022_STACK_H
#define CPP_2022_STACK_H
#include "List.h"

class Stack {
public:
    virtual ~Stack();

    void push(int e);
    int pop();
    bool isEmpty() const;

private:
    List stack = List();


};


#endif //CPP_2022_STACK_H
