#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int a;
    int b;
    cin >> a;
    cin >> b;

    for (int c = a; c <= b; c++)
    {
        switch (c)
        {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        default:
            // notes: c++ doesn't have boolean type
            if (c % 2) // same as c % 2 == 1
            {
                cout << "odd";
            }
            else
            {
                cout << "even";
            }
            break;
        }
        cout << endl;
    }
    return 0;
}

/**
Example input:
8
11

Expected output:
eight
nine
even
odd

 *
*/