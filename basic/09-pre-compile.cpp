#include <iostream>

using namespace std;

// macro
#define Print(...) printf(__VA_ARGS__)
#define print_size(t) printf("Size of %s is %lu\n", #t, sizeof(t))
#define CREATE_VAR(n, x) int var_##n = (x)

typedef struct ParkingLotStruct
{
    int id;
    string policeNumber;
    float price;
} ParkingLot, *ParkingLot;

int main()
{
    ParkingLot parking_lot;

    Print("C++ is interesting and aged more than %d old!\n", 40);

#if defined(__linux__)
    cout << "OS is linux\n";
#elif defined(WIN32)
    cout << "OS is Windows\n";
#elif defined(APPLE) || defined(APPLE)
    cout << "OS is MacOS\n";
#else
#error "Unsupported OS"
#endif

    cout << "At file " << __FILE__ << " line " << __LINE__ << endl;
    print_size(float);
    print_size(parking_lot);

    CREATE_VAR(171, 123902);
    print_size(var_171);
    cout << "Value from var_171 is int: " << var_171 << endl;
}