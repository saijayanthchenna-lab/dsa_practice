//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
//
//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) return 0;   // abs(INT_MIN) is invalid

        long long sum = 0;
        int cop = x;
        x = abs(x);

        while (x != 0) {
            int dig = x % 10;
            sum = sum * 10 + dig;
            x /= 10;
        }

        if (cop < 0)
            sum = -sum;

        if (sum > INT_MAX || sum < INT_MIN)
            return 0;

        return (int)sum;
    }
};
