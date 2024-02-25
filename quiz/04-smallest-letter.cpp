#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int mid, low = 0, hi = letters.size() - 1;
        while (low < hi)
        {
            mid = low + (hi - low) / 2;
            cout << mid;
            letters[mid] <= target ? low = mid + 1 : hi = mid;
        }
        return letters[low] > target ? letters[low] : letters[0];
    }
};

int main()
{
    Solution objek;
    vector<char> letters = {'c', 'f', 'j'};
    char result = objek.nextGreatestLetter(letters, 'c');

    cout << "result: " << result << endl;
    return 0;
}
