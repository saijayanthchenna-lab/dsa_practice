//Given an integer x, return true if x is a palindrome, and false otherwise.

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
    bool isPalindrome(int x) {
        if(x<0) return false;

        int revNUm=reverse(x);
        return x==revNUm;
        
    }
};
