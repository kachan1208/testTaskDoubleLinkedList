#ifndef LISTNODE_H
#define LISTNODE_H

#include <string>
#include "listnode.h"

class listNode
{
private:
    std::string *mStr;
    float mFloat;
    int mInt;
    listNode *mPrev;
    listNode *mNext;
public:
    listNode(std::string *str): mStr(str){}
    listNode(double num): mFloat(num){}
    listNode(int num): mInt(num){}
    void setPrevPointer(listNode *node);
    void setNextPointer(listNode *node);
    ~listNode();
};

#endif // LISTNODE_H
