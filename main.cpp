// this file is the entry point of the program
// it handles user interaction and connects all components together

#include <iostream>
#include "NetworkProcessor.h"
#include "DataPacket.h"
#include "VideoPacket.h"

using namespace std;

int main() {
    // create the main system processor
    NetworkProcessor processor;

    int choice;

    // loop to keep program running until user exits
    while (true) {
        // display menu options
        cout << "\n--- network packet processor ---\n";
        cout << "1. add packet\n";
        cout << "2. process packet\n";
        cout << "3. show stats\n";
        cout << "4. display queue\n";
        cout << "5. exit\n";
        cout << "enter choice: ";
        cin >> choice;

        // option 1: add packet
        if (choice == 1) {
            int id, size, arrivalTime, type;

            cout << "enter packet id: ";
            cin >> id;

            cout << "enter packet size: ";
            cin >> size;

            cout << "enter arrival time: ";
            cin >> arrivalTime;

            cout << "enter type (1 = data, 2 = video): ";
            cin >> type;

            // create packet based on type
            if (type == 1) {
                processor.addPacket(new DataPacket(id, size, arrivalTime));
            } else if (type == 2) {
                processor.addPacket(new VideoPacket(id, size, arrivalTime));
            } else {
                cout << "invalid type\n";
            }
        }

        // option 2: process packet
        else if (choice == 2) {
            int currentTime;

            cout << "enter current time: ";
            cin >> currentTime;

            processor.processPacket(currentTime);
        }

        // option 3: show stats
        else if (choice == 3) {
            processor.showStats();
        }

        // option 4: display queue
        else if (choice == 4) {
            processor.displayQueue();
        }

        // option 5: exit program
        else if (choice == 5) {
            cout << "exiting program\n";
            break;
        }

        // handle invalid input
        else {
            cout << "invalid choice\n";
        }
    }

    return 0;
}