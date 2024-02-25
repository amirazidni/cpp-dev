#include <iostream>
#include <vector>

using namespace std;

class Solution {
   public:
    double myPow(double x, int n) {
        double ans = 1;
        if (n < 0) {
            x = 1 / x;
        }
        if (x == 1) {
            return x;
        }

        long num = labs(n);
        while (num) {
            if (num % 2 == 0) {  // even
                x = x * x;
                num /= 2;
            } else {  // odd
                ans = ans * x;
                num--;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    double result = s.myPow(1.00000, -2147483648);
    cout << result;
}