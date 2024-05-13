#include "queue.h"
#include "iostream"

Queue::Queue()
{
    head_ = NULL;
    size_ = 0;
}

Queue::~Queue()
{
    Node* cur = head_;
    while(cur != NULL)
    {
        Node* del = cur;
        cur = cur->next_;
        delete del;
    }
}

void Queue::print()
{
    LinkedList::print();
}

void Queue::push(int data)
{
    LinkedList::insert(size_++, data);
}

int Queue::pop()
{
    int top = LinkedList::get(0);
    LinkedList::remove(0);
    size_--;
    return top;
}

int Queue::peek()
{
    return LinkedList::get(0);
}

Queue& Queue::operator+=(int value)
{
    this->push(value);
    return *this;
}
// TODO: Queue 클래스 구현 작성