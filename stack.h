#ifndef STACK_H
#define STACK_H

// TODO: Stack 클래스 정의 작성

#include "node.h"
#include "linked_list.h"

class Stack : public LinkedList
{
public:
    Stack();
    ~Stack();

    void print();
    void push(int data);
    int pop();
    int peek();
    Stack& operator+=(int value);

private:
    Node *head_;
    int size_;
};
#endif