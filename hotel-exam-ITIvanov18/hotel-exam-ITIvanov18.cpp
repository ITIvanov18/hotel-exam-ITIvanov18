// hotel-exam-ITIvanov18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Hotel
{
    struct ROOM_PRICING
    {
        float single = 60;
        float double_ = 100;
        float maisonetter = 155;
    };

    struct BOOKING
    {
        string clientName;
        string roomType;
        int nights;
        int rentNumber;
    };

public:
    Hotel(string name, int capacity)
    {
        this->name = name;
        this->capacity = capacity;
        this->singleRooms = capacity * 0.5;
        this->doubleRooms = capacity * 0.4;
        this->maisonette = capacity * 0.1;
    }
    ROOM_PRICING getRoomPricing()
    {
        return ROOM_PRICING();
    }
    string rentARoom(string clientName, string roomType, int numberOfNights)
    {
        bookings.push_back({
                clientName,
                roomType,
                numberOfNights,
                currentBookingNumber++
            });



        if (roomType == "single")
        {
            singleRooms--;
        } if (roomType == "double")
        {
            doubleRooms--;
        }
        else
        {
            --maisonette;
        }

        return "";
    }
    string checkOut(int bookingNumber)
    {

    }

    void report()
    {
        cout << name << " Database: " << endl;;
        cout << "--------------------" << endl;
        for (int i = 0; i < bookings.size(); i++)
        {
            cout << bookings[i].clientName << endl;
            cout << bookings[i].roomType << endl;
            cout << bookings[i].nights << endl;
            cout << bookings[i].rentNumber << endl;
        }
    }

private:
    string name;
    int capacity;
    vector<BOOKING>bookings;
    int currentBookingNumber = 1;
    int singleRooms;
    int doubleRooms;
    int maisonette;
};



int main()
{
    Hotel* hotel = new Hotel("SunnyHotel", 10);
    hotel->rentARoom("Peter", "single", 4);
    hotel->report();


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
