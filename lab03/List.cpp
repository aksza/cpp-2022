//
// Created by Aksza on 10/5/2022.
//

#include <iostream>
#include <stdexcept>
#include "List.h"


List::List() {
    this->first = new Node(0, nullptr);
    //this->first = nullptr;
}
List::~List() {
    Node *temp = this->first->next;
    while (temp->next) {
        delete this->first;
        this->first = temp;
        temp = temp->next;
    }
    delete temp;
}
void List::insertFirst(int d){
    Node *newNode = new Node(d, this->first);
    this->first = newNode;
    ++nodeCounter;
}
void List::print() const {
    Node *temp = this->first;
    while (temp->next){
        std::cout << temp->value << ' ';
        temp = temp->next;
    }
    temp = nullptr;
}

bool List::exists(int d) const {
    Node *temp = this->first;
    while (temp){
        if(temp->value == d){
            return true;
        }
        temp = temp->next;
    }
    temp = nullptr;
    return false;
}


bool List::empty() const {
    return (0 == this->nodeCounter);
}

int List::size() const {
    return this->nodeCounter;
}

int List::removeFirst() {
    if(empty()){
        throw std::invalid_argument("The list is empty\n");
    }
    if(nodeCounter == 1){
        int tempValue = this->first->value;
        delete this->first;
        this->first = nullptr;
        --nodeCounter;
        return tempValue;
    }
    Node*temp = this->first->next;
    int tempValue = this->first->value;

    delete this->first;
    this->first = temp;
    temp = nullptr;

    --nodeCounter;
    return tempValue;
}