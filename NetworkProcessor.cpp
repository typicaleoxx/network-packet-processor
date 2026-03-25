// this file implements the logic for processing packets
// it connects the queue with actual operations like add, process, and stats

#include "NetworkProcessor.h"

// constructor initializes counters to zero
NetworkProcessor::NetworkProcessor() {
    totalProcessed = 0;
    totalLatency = 0;
}

// adds a packet to the queue
void NetworkProcessor::addPacket(Packet* packet) {
    // insert the packet into the queue
    queue.enqueue(packet);

    cout << "packet added to queue\n";
}

// processes the next packet in the queue
void NetworkProcessor::processPacket(int currentTime) {
    // check if queue is empty before processing
    if (queue.isEmpty()) {
        cout << "no packets to process\n";
        return;
    }

    // remove the front packet from the queue
    Packet* p = queue.dequeue();

    // calculate how long the packet waited in the queue
    int latency = currentTime - p->getArrivalTime();

    // update total latency and processed count
    totalLatency += latency;
    totalProcessed++;

    // simulate processing the packet
    p->process();

    cout << "packet processed\n";
}

// display performance statistics
void NetworkProcessor::showStats() {
    cout << "\n--- stats ---\n";

    cout << "total packets processed: " << totalProcessed << endl;

    // avoid division by zero
    if (totalProcessed > 0) {
        double avgLatency = (double) totalLatency / totalProcessed;
        cout << "average latency: " << avgLatency << endl;
    } else {
        cout << "average latency: 0\n";
    }
}

// optional: display queue contents (basic view)
void NetworkProcessor::displayQueue() {
    cout << "current queue: ";
    queue.display();
}