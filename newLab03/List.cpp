//
// Created by Aksza on 10/16/2022.
//

#include "List.h"

#include "List.h"


List::List() {
//    this->first = new Node(0, nullptr);
    this->first = nullptr;
}
List::~List() {
    Node *temp = this->first;

    while (temp){
        temp = temp->next;
        delete this->first;
        this->first = temp;
    }
    temp = nullptr;

//    while (temp->next) {
//        delete this->first;
//        this->first = temp;
//        temp = temp->next;
//    }
//    delete temp;
}
void List::insertFirst(int d){
    Node *newNode = new Node(d, this->first);
    this->first = newNode;
    ++nodeCounter;
}
void List::print() const {
    if(empty()){
        cout<<"A lista ures";
    }else{
        Node *temp = this->first;
        while (temp->next){
            std::cout << temp->value << ' ';
            temp = temp->next;
        }
        cout << temp->value;
        temp = nullptr;
    }
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
        throw invalid_argument("The list is empty\n");
    }
    if(nodeCounter == 1){
        int tempValue = this->first->value;
        this->first = nullptr;
        --nodeCounter;
        return tempValue;
    }
    Node*temp = this->first->next;
    int tempValue = this->first->value;

    this->first = temp;
    temp = nullptr;

    --nodeCounter;
    return tempValue;
}

void List::remove(int d, DeleteFlag df) {
    switch (df) {
        case DeleteFlag::LESS:{
            Node *temp = this->first;
            if(temp->value < d){
                //torles
                try{
                    removeFirst();
                }catch (std::invalid_argument& e){
                    std::cout<< e.what();
                }
            }
            while (temp->next){
                if (temp->next->value < d){
                    Node *temp2 = temp->next->next;
                    delete temp->next;
                    temp->next = temp2;
                    return;
                }
                temp = temp->next;
            }
            temp = nullptr;

            break;
        }
        case DeleteFlag::EQUAL:{
            Node *temp = this->first;
            if(temp->value == d){
                try{
                    removeFirst();
                }catch (std::invalid_argument& e){
                    std::cout<< e.what();
                }
            }
            while (temp->next){
                if (temp->next->value == d){
                    Node *temp2 = temp->next->next;
                    delete temp->next;
                    temp->next = temp2;
                    return;
                }
                temp = temp->next;
            }
            temp = nullptr;

            break;
        }
        case DeleteFlag::GREATER:{
            Node *temp = this->first;
            if(temp->value > d){
                //torles
                try{
                    removeFirst();
                }catch (std::invalid_argument& e){
                    std::cout<< e.what();
                }
            }
            while (temp->next){
                if (temp->next->value > d){
                    Node *temp2 = temp->next->next;
                    delete temp->next;
                    temp->next = temp2;
                    return;
                }
                temp = temp->next;
            }
            temp = nullptr;
            break;
        }
        default:
            break;
    }
}

//void List::rekinsert(int value) {
//    Node* temp = this->first;
//    if(temp->value != value){
//        temp = temp->next;
//        rekinsert(value);
//    }
//    insertFirst(temp->value);
//}
//
