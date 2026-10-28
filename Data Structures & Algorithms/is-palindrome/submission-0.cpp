class Solution {
public:
    bool isPalindrome(string s) {      
        int left = 0; //start
        int right  = s.length() - 1; // end

        while (left < right)
        {
            //check for punuation 
            while (left < right && !isalnum(s[left]))
            {
                ++left;
            }
            while (left < right && !isalnum(s[right]))
            {
                --right;
            }
            //check for lower
            if (tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};
