#ifndef LISTNODE_H
#define LISTNODE_H

#include <string>
#include "listnode.h"
#include "nodevalue.h"

class listNode
{
private:
    nodeValue *mValue;
    listNode *mPrev;
    listNode *mNext;

public:
    listNode(std::string *str) : mValue(new nodeValueStr(str)){}
    listNode(double num) : mValue(new nodeValueDouble(num)){}
    listNode(int num) : mValue(new nodeValueInt(num)){}
    ~listNode();

    void setPrevPointer(listNode *node);
    void setNextPointer(listNode *node);
    void data();
    listNode* operator++(int);
    listNode* next();
};

#endif // LISTNODE_H
