#include <iostream>
#include <vector>

using namespace std;

void run_vector();

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n); // Menggunakan vector alih-alih array

    for (int c = 0; c < n; c++)
    {
        cin >> arr[c];
    }

    for (int c = n - 1; c >= 0; c--)
    {
        cout << arr[c] << " ";
    }
    cout << endl;

    run_vector();
    return 0;
}

/**
4
1 4 3 2

2 3 4 1
*/

void run_vector()
{
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Count element: " << numbers.size() << endl;

    // Use index
    cout << numbers[0] << ""
         << numbers[1] << endl;

    // Iterator
    cout << "Iterated vector: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}
