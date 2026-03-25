#ifndef DATA_PACKET_H
#define DATA_PACKET_H

#include "Packet.h"

/*
DataPacket.h
-inherits from Packet
-override process()
*/

class DataPacket : public Packet {
public:
    DataPacket(int id, int size, int arrivalTime) : Packet(id, size, arrivalTime) {}
    void process() override {
        std::cout << "Processing Data Packet with ID: " << id << '\n';
    }
};

#endif