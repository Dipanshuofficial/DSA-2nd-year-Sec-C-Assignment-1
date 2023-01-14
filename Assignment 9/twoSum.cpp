class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        // for(int i=nums.size()-1; i>=0;i--){
        //     mp[nums[i]]=i;//mapping value to index of vector in reverse order
        // }
        for(int j=0; j<nums.size(); j++){
            if(mp.count(nums[j])){
                return {j,mp[nums[j]]};
            }
            else{
                mp[target - nums[j]]=j;
            }
        }
        return {-1,-1};
    }
};
