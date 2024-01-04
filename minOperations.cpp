class Solution {
public:
    int minOperations(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int,int> myMap;
        for(int i = 0; i < size;i++)
        {
            myMap[nums[i]]++;
        }
        int count = 0,d;
        for(auto &pair:myMap)
        {
             if(pair.second ==1)
            {
                return -1;
            }
           count += (pair.second+2)/3;
            
        }
        return count;
    }
};