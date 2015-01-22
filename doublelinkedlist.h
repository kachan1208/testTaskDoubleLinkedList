#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

#include <string>
#include "listnode.h"

class doubleLinkedList{
private:
    listNode *mFirst;
    listNode *mLast;
    listNode *mCurrent;
    int mSize;

    void setPointers(listNode *node);

public:
    doubleLinkedList();
    ~doubleLinkedList();

    void insert(std::string *str);
    void insert(double num);
    void insert(int num);
    void getAll();
    int size();
    listNode *begin();
    listNode *end();
};

#endif // DOUBLELINKEDLIST_H
