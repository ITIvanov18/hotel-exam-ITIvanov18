// hotel-exam-ITIvanov18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

struct ROOM_PRICING
    {
    int single = 60;
    int doubleRoom = 100;
    int maisonette = 155;
    };

    class Hotel
    {
    public:
        Hotel(string newName, int newCapacity)
        {
            name = newName;
            capacity = newCapacity;
            doubleRooms = capacity * 0.50;
            singleRooms = capacity * 0.40;
            maisonette = capacity * 0.10;

        }

        ROOM_PRICING getRoomPricing()
        {
            ROOM_PRICING tmp;
            return tmp;
        }

        string rentRoom(string clientName, string roomType, int numberOfNights)
        {
            if (roomType == "signle" && doubleRooms - 1 >= 0)
            {
                return "No single rooms available! Available double rooms: " + (doubleRooms)
            }
            else if (roomType == "double" && doubleRooms - 1 >= 0)
            {
                return false;
            }
            else if (roomType == "maisonette" && maisonette - 1 >= 0)
            {

            }
        }


    private:
        string name;
        int doubleRooms, singleRooms, maisonette;
        int capacity;
        bool checkForRooms(string roomType)
        {

        }

    };


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
