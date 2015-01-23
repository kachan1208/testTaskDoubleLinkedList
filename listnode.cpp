#include <iostream>
#include "listnode.h"
#include "nodevalue.h"

listNode::~listNode()
{

}

void listNode::setPrevPointer(listNode *node){
    mPrev = node;
}

void listNode::setNextPointer(listNode *node){
    mNext = node;
}

void listNode::data(){
    mValue->data();
}

listNode listNode::operator++(int){
    return *mNext;
}

listNode *listNode::next(){
    return mNext;
}

