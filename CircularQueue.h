/*
This file implements a queue using a circular linkedlist
it uses Node to store elements and manages then in FIFO order
circilar - last node points back to first node
*/

// this ensures the file is only included once during compilation
// it prevents duplicate definition errors
#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

#include "Node.h"
#include <iostream>
using namespace std;

// template allows quere to store any type 
template<typename T>
class CircularQueue{
private:
    // pointer to the last node(rear of the queue)
    Node<T> *rear;

public:
    // constructor initializes an empty queue
    CircularQueue(){
        rear = nullptr;
    }

    // check if queue is empty
    bool isEmpty(){
        return rear == nullptr;
    }

    // add a new element to the queue
    void enqueue(T value){
        // create a new node with given value
        Node<T>* newNode = new Node<T>(value);

        // if equeue is empty, new node points to itself
        if (isEmpty()){
            rear = newNode;
            rear->next = rear;
        }

        else{
            // insert new node after rear-> next (front)
            newNode->next = rear->next;
            rear->next = newNode;

            // move rear to the new node
            rear = newNode;
        }
    }

    // remove and return the from element
    T dequeue(){
        // if queue is empty, show error
        if(isEmpty()){
            cout << "queue is empty\n";
            exit(1);
        }

        // front is the node after rear
        Node<T> *front = rear->next;
        T value = front->data;

        // if only one node exits
        if (rear== front){
            rear = nullptr;
        }
        else{
            // remove front node by skipping it
            rear->next = front->next;

        }
        // free memory
        delete front;

        return value;
    }

    // display all elements in the queue
    void display(){
        if (isEmpty()){
            cout << "queue is empty \n";
            return;
        }

        Node<T> *temp = rear->next;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != rear->next);

        cout << endl;
    }
};

#endif