#include <iostream>

using namespace std;

int main()
{
    // this is pointer too
    char atop[16] = {
        'A',
        'B',
        'C',
        'D',
        'E',
        'F',
        'G',
        'H',
        'I',
        'J',
        'K',
        'L',
        'M',
        'N',
        'O',
        'P',
    };

    int *pointer = (int *)atop;

    for (int c = 0; c < 16; c++)
    {
        printf("%x ", atop[c]);
    }

    cout << endl;

    for (int c = 0; c < 4; c++)
    {
        printf("%x ", pointer[c]);
    }

    cout << endl;

    // all pointer can casting to void pointer
    void *ptr_void = atop;
    for (int c = 0; c < 4; c++)
    {
        // type is not found
        // printf("%x ", ptr_void[c]); // error
    }

    // memory allocation
    void *po = malloc(40 * sizeof(int));
    for (int c = 0; c < 40; c++)
    {
        // printf("%d ", po[c]); // error
    }
    free(po);

    return 0;
}