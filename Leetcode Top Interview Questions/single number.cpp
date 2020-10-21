class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second==1)
                return it->first;
        }
        return -1;
    }
};