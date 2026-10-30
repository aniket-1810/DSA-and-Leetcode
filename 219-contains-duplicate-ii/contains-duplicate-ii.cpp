class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         int n=nums.size();
         unordered_map<int, int>mp;
         for(int i =0; i<n; i++){
            if(mp.find(nums[i])!=mp.end()){
                int j=mp[nums[i]];
                if(abs(i-j)<=k) return true;
                mp[nums[i]]=i;

            }
            mp[nums[i]]=i;
         }
         return false;
    }
};