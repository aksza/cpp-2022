#include <iostream>
#include "List.h"

int main() {
    List lista1 = List();
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

    try{
        int deletedValue = lista1.removeFirst();
        std::cout<<deletedValue<<std::endl<<std::endl;
        lista1.removeFirst();
    }catch (std::invalid_argument& e){
       std::cout<< e.what();
    }
    lista1.print();

    return 0;
}
