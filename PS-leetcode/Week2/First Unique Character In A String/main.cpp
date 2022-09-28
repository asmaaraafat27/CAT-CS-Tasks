class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0; i<s.size(); i++)
        {
            bool ok = true;
            for(int j=0; j<s.size(); j++)
            {
                if(i!=j && s[i] == s[j])
                {
                    ok = false;
                    break;
                }
            }

            if(ok)
                return i;
        }
        return -1;
    }
};
