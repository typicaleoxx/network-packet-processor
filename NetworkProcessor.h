/*
this file defines the main controller of the system
it manages the queue, processes packets, and tracks performance stats
*/

#ifndef NETWORKPROCESSOR_H
#define NETWORKPROCESSOR_H
// ensures this file is only included once

#include "CircularQueue.h"
#include "Packet.h"
#include <iostream>
using namespace std;

// this class represents the system that handles incoming packets
class NetworkProcessor{
private:
    // queue that stores pointers to Packet onjects
    CircularQueue<Packet *> queue;

    // total number of packets processed
    int totalProcessed;
    
    // sum of all latencies (used to calculate average later)
    int totalLatency;

public:
    // constructor initialises stats
    NetworkProcessor();

    // adds a packet to the queue
    void addPacket(Packet* packet);

    // processes the next packet in the queue
    void processPacket(int currentTime);

    // displays performance statistics
    void showStats();

    // displays current queue (optional helper)
    void displayQueue();
};

#endif