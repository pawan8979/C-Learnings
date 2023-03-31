class Solution
{

    bool valid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') && (ch >= 'A' && ch <= 'Z') || (ch >= 0 && ch <= 9))
            return 1;
        else
            return 0;
    }

    char lowercase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 0 && ch <= 9))
            return ch;
        else
        {
            ch = ch - 'A' + 'a';
            return ch;
        }
    }

    int palindrome(string s)
    {
        int b = 0;
        int e = s.length() - 1;
        while (b <= e)
        {
            if (s[b] != s[e])
                return 0;
            else
            {
                b++;
                e--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s)
    {
        int i = 0;
        for (int j = 0; j < s.length(); j++)
        {

            if (valid(s[j]))
            {
                s[i] = s[j];
                i++;
            }
        }

        for (int j = 0; j < s.length(); j++)
        {
            s[j] = lowercase(s[j]);
        }

        return palindrome(s);
    }
};
