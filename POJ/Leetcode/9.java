//Determine whether an integer is a palindrome.
//An integer is a palindrome when it reads the same backward as forward.
class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0 || x != 0 && x % 10 == 0) {
            return false;
        }
        int rev = 0;
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x = x / 10;
        }
        return (x==rev || x==rev/10);
    }
}