#include <iostream>
#include <string>
#include <array>

using namespace std;

// pass by address or pass by pointer
// this will copy memory address
void swapWithAddr(int *first, int *second)
{
    int temp = *first;
    printf("temp is an integer from pointer first with value: %d.\n", temp);
    *first = *second;
    *second = temp;
}

// pass by reference, variables not copied but referenced
// for args: class, struct, array, or other big sized variables
void swapWithRef(int &first, int &second)
{
    int temp = first;
    printf("temp is an integer with value: %d.\n", temp);

    first = second;
    second = temp;
}

inline double multiply(double x = 0, double y = 0)
{
    return x * y;
}

void printArr(char arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    printf("\n");
}

int main()
{
    int realValue = 10;
    int *pointerTo = &realValue; // address of realValue

    printf("The value from pointerTo is %p. This is an address.\n", pointerTo);
    printf("The pointed value from pointerTo is %d.\n", *pointerTo);

    int satu;
    int dua = 4;

    printf("satu: %d | ", satu = 1);
    printf("dua: %d\n\n", dua);
    swapWithRef(satu = 1, dua = 4);
    printf("Swapping with reference: %d %d.\n\n", satu, dua); // 4 1

    satu = 1;
    dua = 2;
    printf("satu: %d | ", satu);
    printf("dua: %d\n\n", dua);
    swapWithAddr(&satu, &dua);
    printf("Swapping with address: %d %d.\n", satu, dua); // 1 2

    printf("\n", dua);

    // Inline function
    cout << multiply(3, 6) << endl;
    cout << multiply(7, 9) << endl;
    cout << multiply(5, 7) << endl;

    printf("\n", dua);

    // Array is a pointer
    char chars[3] = {'b', 's', 'd'};
    char *pArr = chars;

    printArr(chars, 3);
    printArr(pArr, 3);

    // shift 1 step the address
    cout << "*pArr before: " << *pArr << endl;
    pArr++;
    cout << "*pArr after: " << *pArr << endl;
    cout << "chars third element: " << chars[2] << endl;
    cout << "pArr third element: " << pArr[2] << endl;

    // out of the bound, buffer overrun
    printArr(pArr, 5);

    return 0;
}
