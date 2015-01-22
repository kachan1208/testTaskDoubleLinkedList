#include <string>
#include "doublelinkedlist.h"

doubleLinkedList::doubleLinkedList(){
    mFirst = NULL;
    mLast = NULL;
    mSize = 0;
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
    for(mCurrent = mFirst; mCurrent != mLast; mCurrent = mCurrent->next()){
        mCurrent->data();
    }
    mLast->data();
}

int doubleLinkedList::size(){
    return mSize;
}

listNode *doubleLinkedList::begin(){
    return mFirst;
}

listNode *doubleLinkedList::end(){
    return mLast;
}

void doubleLinkedList::setPointers(listNode *node){
    if(!mFirst){
        mFirst = node;
        node->setPrevPointer(NULL);
        mLast = node;
        mCurrent = node;
    }
    else{
        node->setPrevPointer(mLast);
        mLast->setNextPointer(node);
        mLast = node;
        mCurrent = node;
    }

    mSize++;
}
