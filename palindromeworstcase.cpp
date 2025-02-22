#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) 
            return false;  

        int rev = 0;
        while (x > rev) { 
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        return (x == rev || x == rev / 10);
    }
};

int main() {
    Solution obj;
    cout << obj.isPalindrome(999999999) << endl;  
    return 0;
}
