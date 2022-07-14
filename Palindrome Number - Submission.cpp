Palindrome Number - "https://leetcode.com/problems/palindrome-number/"

class Solution 
{
public:
    bool isPalindrome(int n) 
    {
        int temp, r, sum=0;       
        temp = n;
        
        while (n>0)
        {
            r = n % 10;
            sum = (sum * 10) + r;
            n = n/10;
        }
        
        if (temp == sum)
            return true;
            
        else 
            return false;
    }
};
