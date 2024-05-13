#ifndef QUEUE_H
#define QUEUE_H

// TODO: Queue 클래스 정의 작성

#include "node.h"
#include "linked_list.h"

class Queue : public LinkedList
{
    public:
        Queue();
        ~Queue();

        void print();
        void push(int data);
        int pop();
        int peek();
        Queue& operator+=(int value);

    private:
        Node *head_;
        int size_;
};

#endif