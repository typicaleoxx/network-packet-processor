#ifndef PACKET_H
#define PACKET_H

/*Packet.h (base class)
data members:
int id
int size
int arrivalTime
Functions:
-constructor
-getters
-virtual process()
*/

#include <iostream>
#include <string>
#include <vector>

class Packet {
protected:
    int id;
    int size;
    int arrivalTime;
public:
    Packet(int id, int size, int arrivalTime): id(id), size(size), arrivalTime(arrivalTime) {}
    int getId() const {return id;}
    int getSize() const {return size;}
    int getArrivalTime() const {return arrivalTime;}
    virtual void process() = 0;
    virtual ~Packet() = default;
};

#endif