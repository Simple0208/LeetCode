#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            if (rev<INT_MIN / 10 || rev>INT_MAX / 10) {
                return 0;
            }
            int y = x % 10;
            x /= 10;
            rev = rev * 10 + y;
        }
        return rev;
    }
};

int main() {
    Solution solution;
    int number;

    cout << "x = ";
    cin >> number;

    int revNumber = solution.reverse(number);

    cout << revNumber << endl;
    
    return 0;
}