#include <string>
#include "doublelinkedlist.h"

doubleLinkedList::doubleLinkedList(){
    mFirst = NULL;
    mLast = NULL;
}

doubleLinkedList::~doubleLinkedList(){

}

void doubleLinkedList::insert(std::string *str){
    listNode *node = new listNode(str);
    setPointers(node);
}

void doubleLinkedList::insert(double num){
    listNode *node = new listNode(num);
    setPointers(node);
}

void doubleLinkedList::insert(int num){
    listNode *node = new listNode(num);
    setPointers(node);
}

void doubleLinkedList::getAll(){

}

listNode *doubleLinkedList::begin()
{
    return mFirst;
}

listNode *doubleLinkedList::end()
{
    return mLast;
}

void doubleLinkedList::setPointers(listNode *node)
{
    if(!mFirst){
        mFirst = node;
        node->setPrevPointer(NULL);
//        node->setNextPointer(NULL);
        mLast = node;
    }
    else
    {
        node->setPrevPointer(mLast);
        mLast->setNextPointer(node);
        mLast = node;
    }
}
