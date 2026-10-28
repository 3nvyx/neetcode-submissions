class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false; 
        }
        else
        {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            int i;
            while (i < s.length())
            {
                if (s[i] != t[i])
                {
                    return false;
                }
                ++i;
            }
        }
        return true;
    }
};
