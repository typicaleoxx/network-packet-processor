# Network Packet Processor

## About This Project

This is a C++ console program that simulates how packets are processed using queues.

The program is built using a **queue**.

This project demonstrates:

- Implementation of a templated data structure
- Object oriented programming
- Clean and modular code organization

---

## Features

The program allows the user to:




---

## Data Stored (Packet Class)

Each packet stores:

- ID  
- Size  
- Arrival Time  

This data is stored inside the `Packet` class.

The class includes:

- Default constructor  
- Getter functions  
- Default deconstructor 

---

## How the Program Works

The program uses a **templated Queue** class.

Each packet becomes a node in the queue.

Each node contains:

- The packet data  
- A pointer to the next node  
- The last node points to the first node

---

## Project Structure

### main.cpp

- Contains the `main()` function  
- 
- Handles user input  
- Calls circular linked list operations  

This file controls the overall program flow.

---

### Packet.h / application.cpp

- Defines and implements the `Packet` class  
- Stores packet data  
- Contains constructors, getters, and deconstructor functions  
- Implements operator overloading  
- Provides a virtual process function  

This class represents the data model.

---

### CircularQueue.h

- Implements a Queue using a templated circular linked list 
- Handles adding a new element to the queue (enqueue) 
- Handles removing and returns the from element (dequeue)  
- Support displaying all data in the queue
- Manages memory in the destructor  

This file handles all linked list logic.

---

## How to Compile (Linux / Mac / Student Cluster)

Make sure all files are in the same folder:

- main.cpp
- Packet.h
- DataPacket.h
- VideoPacket.h
- Node.h  
- CircularQueue.h  
- NetworkProcessor.h  

Compile using:


Run using:



---

## What We Learned

- How to implement a queue circular linked list  
- How templates make a data structure reusable  
- How to manage dynamic memory safely  
- How to organize a multi file C++ project  

---

## Future Improvements

- 
- 
-  
- 
- 

---

This project demonstrates practical understanding of data structures, templates, memory management, and object oriented programming in C++.
