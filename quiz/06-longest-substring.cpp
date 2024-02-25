#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubstring(string s)
{
  unordered_map<char, int> charMap;
  int maxLength = 0;
  int left = 0;

  for (int right = 0; right < s.length(); right++)
  {
    char currentChar = s[right];

    // jika exist
    if (charMap.find(currentChar) != charMap.end())
    {
      left = max(charMap[currentChar] + 1, left);
    }

    charMap[currentChar] = right;
    maxLength = max(maxLength, right - left + 1);
  }

  return maxLength;
}

int main()
{
  string s = "abcabcbb"; // Example input
  int result = longestSubstring(s);
  cout << "Length of longest substring without repeating characters: " << result << endl;

  return 0;
}
