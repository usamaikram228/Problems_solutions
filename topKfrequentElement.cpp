#include<iostream>
#include<vector>

using namespace std;
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> m;
    int size = nums.size();
    for (int i = 0; i < size;i++)
    {
        m[nums[i]]++;
    }
    vector<int> array;
    std::unordered_map<int, int>::iterator it;
    it = m.begin();
    int max;
    int  ans = 0;
    for (int i = 0; i < k; i++)
    {
        max = 0;
        it = m.begin();
        while (it != m.end())
        {
            if (it->second > max)
            {
                max = it->second;
                ans = it->first;

            }
            it++;
        }
        array.push_back(ans);
        m.erase(ans);

    }
    return array;
}
int main()
{
	
	return 0;
}