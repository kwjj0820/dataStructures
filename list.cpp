#include "list.h"
#include <iostream>

// TODO: List 클래스 구현 작성
List::List()
{
    head_ = NULL;
    size_ = 0;
}

List::~List()
{
    Node* cur = head_;
    while(cur != NULL)
    {
        Node* del = cur;
        cur = cur->next_;
        delete del;
    }
}

void List::print()
{
    LinkedList::print();
}

void List::insert(int index, int value)
{
    LinkedList::insert(index, value);
}

int List::get(int index)
{
    return LinkedList::get(index);
}

void List::remove(int index)
{
    LinkedList::remove(index);
}