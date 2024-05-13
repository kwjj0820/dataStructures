#include "linked_list.h"
#include <iostream>

LinkedList::LinkedList()
{
    head_ = NULL;
    size_ = 0;
}

LinkedList::~LinkedList()
{
    Node* cur = head_;
    while(cur != NULL)
    {
        Node* del = cur;
        cur = cur->next_;
        delete del;
    }
}

void LinkedList::print()
{
    Node* cur = head_;
    while(cur != NULL)
    {
        std::cout << cur->value_ << ' ';
        cur = cur->next_;
    }
    std::cout << std::endl;
}

void LinkedList::insert(int index, int value)
{
    Node* newNode = new Node(value);
    if(index == 0)
    {
        newNode->next_ = head_;
        head_ = newNode;
        size_++;
    }
    else
    {
        Node* cur = head_;
        for(int i = 0; i < index - 1; i++)
        {
            cur = cur->next_;
        }
        newNode->next_ = cur->next_;
        cur->next_ = newNode;
        size_++;
    }
}

int LinkedList::get(int index)
{
    Node* cur = head_;
    for(int i = 0; i < index; i++)
    {
        cur = cur->next_;
    }
    return cur->value_;
}

void LinkedList::remove(int index)
{
    Node* cur = head_;
    Node* pre = NULL;
    for(int i = 0; i < index; i++)
    {
        pre = cur;
        cur = cur->next_;
    }
    if(pre != NULL)
    {
        pre->next_ = cur->next_;
    }
    else
    {
        head_ = cur->next_;
    }
    delete cur;
    size_--;
}