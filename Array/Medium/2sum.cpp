class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>um;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int moreneeded = target - num;
            if(um.find(moreneeded)!=um.end()){
                return {um[moreneeded],i};
            }
            um[num]=i;
        }
        return {-1,-1};
    }
};
