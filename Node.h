/*
This file defines a generic node class used in a linkedlist
each node stores some data and pointer to next node
this will be used to build circular queue later
*/

// this checks if NODE_H has already been defined
// if not, it defines it so this file is only included once
// this prevents duplicate defiction errors during compilation
#ifndef NODE_H
#define NODE_H

// template allows this node to store any type (Like Packet of int)
template<typename T>
class Node{
public:
    // store actual data inside the node
    T data;
    Node<T> *next;

    // constructor to initialise the node with a value
    Node (T value){
        // assign the given value to the data field
        data = value;

        // initially node doesnot point to anything
        next = nullptr;
    }
};

#endif