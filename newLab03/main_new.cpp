//
// Created by Aksza on 10/16/2022.
//

#include <iostream>
#include "List.h"
#include "Stack.h"
using namespace std;


int main(){
    List lista1 = List();
    cout<<"A lista merete: "<< lista1.size()<<endl;
    lista1.insertFirst(10);
    lista1.insertFirst(20);

    lista1.print();

    std::cout<<std::endl<<std::endl;
    if(lista1.exists(10)){
        std::cout << "10-es benne van"<< std::endl;
    } else{
        std::cout<<"10 nincs benne"<<std::endl;
    }
    if(lista1.exists(25)){
        std::cout<<"25 bennevan "<<std::endl;
    } else{
        std::cout<<"25 nincs benne"<<std::endl;
    }
    std::cout<<std::endl<<std::endl;
    if(lista1.empty()){
        cout<<"A lista ures";
    } else{
        cout<<"A lista nem ures";
    }

    cout<<endl;

    cout << "A lista merete: "<<lista1.size()<<endl;
    try{
        int deletedValue = lista1.removeFirst();
        std::cout<<"TOROLVE: "<<deletedValue<<std::endl<<std::endl;
        lista1.removeFirst();
        lista1.removeFirst();
    }catch (std::invalid_argument& e){
        std::cout<< e.what();
    }
    lista1.print();
    cout << endl;
    lista1.insertFirst(1);
    lista1.print();
    cout<<endl;
    lista1.insertFirst(2);
    lista1.insertFirst(3);
    lista1.insertFirst(4);
    lista1.print();
    lista1.remove(2,List::DeleteFlag::LESS);
    cout<<endl;
    lista1.print();
    lista1.~List();
    Stack verem = Stack();
    verem.push(2);
    verem.push(4);
    verem.pop();
    verem.pop();
    verem.pop();
    return 0;
}