#include <iostream>

using namespace std;

const int NMAX = 1000;
bool primeNums[NMAX];

// find prime number from n sequence
void sieveOfEratosthenes(int n)
{

  for (int i = 2; i <= n; i++)
    primeNums[i] = true;

  for (int i = 2; i <= (n / 2); i++)
    if (primeNums[i])
      for (int j = i * 2; j <= n; j += i)
        primeNums[j] = false;
}

int main()
{
  int n = 17;
  sieveOfEratosthenes(n);
  for (int i = 0; i <= n; i++)
  {
    if (primeNums[i])
      cout << i << " ";
  }
  cout << endl
       << endl;

  return 0;
}