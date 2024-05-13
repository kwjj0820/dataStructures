#include "stack.h"
#include <iostream>

Stack::Stack()
{
    head_ = NULL;
    size_ = 0;
}
Stack::~Stack()
{
    Node* cur = head_;
    while(cur != NULL)
    {
        Node* del = cur;
        cur = cur->next_;
        delete del;
    }
}

void Stack::print()
{
    LinkedList::print();
}

void Stack::push(int data)
{
    LinkedList::insert(0, data);
    size_++;
}

int Stack::pop()
{
    int top = LinkedList::get(0);
    LinkedList::remove(0);
    size_--;
    return top;
}

int Stack::peek()
{
    return LinkedList::get(0);
}

Stack& Stack::operator+=(int value)
{
    this->push(value);
    return *this;
}