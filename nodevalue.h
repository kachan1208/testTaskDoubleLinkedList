#ifndef NODEVALUE_H
#define NODEVALUE_H

#include <string>
#include <iostream>

class nodeValue
{
public:
    virtual void data() = 0;
};

class nodeValueInt : public nodeValue{
private:
    int value;
public:
    nodeValueInt(int num) : value(num){}
    ~nodeValueInt(){}

    void data(){
        std::cout << value;
    }
};

class nodeValueDouble : public nodeValue{
private:
    double value;

public:
    nodeValueDouble(double num) : value(num){}
    ~nodeValueDouble(){}

    void data(){
        std::cout << value;
    }
};

class nodeValueStr : public nodeValue{
private:
    std::string *value;
public:
    nodeValueStr(std::string *str) : value(str){}
    ~nodeValueStr(){}

    void data(){
        std::cout << value->data();
    }
};



#endif // NODEVALUE_H
