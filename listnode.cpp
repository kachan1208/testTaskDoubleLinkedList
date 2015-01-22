#include "listnode.h"

listNode::~listNode()
{

}

void listNode::setPrevPointer(listNode *node){
    mPrev = node;
}

void listNode::setNextPointer(listNode *node)
{
    mNext = node;
}

