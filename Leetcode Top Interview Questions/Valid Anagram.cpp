class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
        for(int i=0;s[i];i++)
        {
            m[s[i]]++;
        }
        for(int i=0;t[i];i++)
        {
            m[t[i]]--;
        }
        map<char,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second!=0)
                return false;
        }
        return true;
    }
};