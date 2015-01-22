#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

#include <string>
#include "listnode.h"

class doubleLinkedList{
public:
    doubleLinkedList();
    ~doubleLinkedList();

    void insert(std::string *str);
    void insert(double num);
    void insert(int num);
    void getAll();
    listNode *begin();
    listNode *end();

private:
    listNode *mFirst;
    listNode *mLast;

    void setPointers(listNode *node);
};

#endif // DOUBLELINKEDLIST_H
