#include <iostream>
#include "doublelinkedlist.h"

int main(){
    doubleLinkedList list;
    std::string *test = new std::string("test");
    list.insert(test);
    list.insert(12);
    list.insert(213);
    list.insert(test);
    list.insert(321.2);
}

