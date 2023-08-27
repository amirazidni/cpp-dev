#include <iostream>
#include "functions.h"

using namespace std;

struct ParkingLot
{
    int id;
    string policeNumber;
    float price;
};

int main()
{
    ParkingLot parking_lot;

    // array of struct
    // ParkingLot parking_lots[10];
    // or
    // vector<ParkingLot> parking_lots;

    parking_lot.id = 1;
    parking_lot.policeNumber = "RR01WA";
    parking_lot.price = 900.00;

    ParkingLot *parkinglot_ptr = &parking_lot;

    cout << "Id: " << parkinglot_ptr->id << endl;
    cout << "Nopol: " << parking_lot.policeNumber << endl;
    cout << "Harga: " << parkinglot_ptr << endl;

    cout << sum(parking_lot.id, 1);

    return 0;
}
