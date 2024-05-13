#ifndef LIST_H
#define LIST_H

#include "node.h"
#include "linked_list.h"

class List : public LinkedList
{
public:
    List();
    ~List();

    void print();
    void insert(int index, int value);
    int get(int index);
    void remove(int index);

private:
    Node *head_;
    int size_;
};
#endif