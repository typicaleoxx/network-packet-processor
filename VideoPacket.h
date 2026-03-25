#ifndef VIDEO_PACKET_H
#define VIDEO_PACKET_H

#include "Packet.h"

/*
VideoPacket.h
-inherits from Packet
-override process()
*/

class VideoPacket : public Packet {
public: 
    VideoPacket(int id, int size, int arrivalTime) : Packet(id, size, arrivalTime) {}
    void process() override {
        std::cout << "Processing Video Packet with ID: " << id << '\n';
    }
};

#endif