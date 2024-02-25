#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    if (num < 0)
        return false; // Angka negatif bukan palindrome

    int original = num;
    int reversed = 0;

    while (num > 0)
    {
        int digit = num % 10;             // Ambil digit terakhir
        reversed = reversed * 10 + digit; // Masukkan digit ke reversed
        num = num / 10;                   // Buang digit terakhir
    }

    return original == reversed;
}

int main()
{
    int num = 12321;

    if (isPalindrome(num))
    {
        cout << num << " adalah palindrome." << endl;
    }
    else
    {
        cout << num << " bukan palindrome." << endl;
    }

    return 0;
}
