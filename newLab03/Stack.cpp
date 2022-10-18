//
// Created by Aksza on 10/18/2022.
//

#include "Stack.h"

Stack::~Stack() {
    this->stack.~List();
}

void Stack::push(int e) {
    stack.insertFirst(e);
}

int Stack::pop() {
    try{
       int c = this->stack.removeFirst();
        return c;
    }catch(std::invalid_argument& e){
        std::cout<< e.what();
        return 0;
    }
}

bool Stack::isEmpty() const {
    return this->stack.empty();
}

