#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int num)
{
  string original = to_string(num); // Ubah angka menjadi string
  string reversed = original;       // Salin string asli

  // Balik string yang disalin
  int n = reversed.length();
  for (int i = 0; i < n / 2; i++)
  {
    swap(reversed[i], reversed[n - i - 1]);
  }

  // Bandingkan string asli dengan yang sudah dibalik
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
