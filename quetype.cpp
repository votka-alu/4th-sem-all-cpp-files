#include <iostream>
#include "QueType.h"

using namespace std;

QueType::QueType()
{
    front = rear = NULL;
}

QueType::~QueType()
{
    MakeEmpty();
}

void QueType::MakeEmpty()
{
    NodeType* temp;
    while (front != NULL)    // while queue is not empty
    {
        temp = front;          // save address of front node
        front = front->next;  // make front point to next node
        delete temp;          // delete the old front node
    }
    rear = NULL;
}

void QueType::Enqueue(ItemType newItem)
{
    NodeType* newNode;   // create a new node

    newNode = new NodeType;  // place newItem in new node
    newNode->info = newItem;
    newNode->next = NULL;   // new node points to NULL

    if (rear == NULL)      // if queue is empty, newNode is also the rear
        front = rear = newNode;
    else                 // if queue is not empty, insert newNode after rear
    {
        rear->next = newNode;
        rear = newNode;
    }
}

void QueType::Dequeue(ItemType& item)
{
    NodeType* temp;   // create a pointer to delete the front node

    if (IsEmpty())
    {
        cout << "Queue is empty! Cannot dequeue." << endl;
        exit(1);
    }
    else
    {
        temp = front;   // save the front node
        item = temp->info;  // copy the info to item
        front = front->next;  // make front point to the next node

        if (front == NULL)  // if front is NULL, then the queue has only one node
            rear = NULL;

        delete temp;  // delete the old front node
    }
}

bool QueType::IsEmpty()
{
    return (front == NULL);
}

bool QueType::IsFull()
{
    NodeType* temp;   // create a new node

    temp = new NodeType;  // try to allocate a new node

    if (temp == NULL)    // if allocation fails, the queue is full
        return true;
    else
    {
        delete temp;  // if allocation succeeds, deallocate the node
        return false;
    }
}
