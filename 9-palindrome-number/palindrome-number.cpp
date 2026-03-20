class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int halfReverse = 0;

        while (halfReverse < x) {
            halfReverse = halfReverse * 10 + x % 10;
            x /= 10;
        }

        return x == halfReverse || x == halfReverse / 10;
    }
};