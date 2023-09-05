class Solution {
public:
    bool isPalindrome(int n) {
        int reminder;
        long long rev = 0;
        int  x = n;
        if (n<0)
        {
            return false;
        }

        while(x != 0)
        {
            reminder = x % 10;
            rev = rev * 10 + reminder;
            x = x / 10;
        }
        if (n == rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
