class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos, neg;
        for(int i=0; i<n; i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int k=0;
        for(int i=0; i<n/2; i++){
            nums[k]=pos[i];
            k++;
            nums[k]=neg[i];
            k++;
        }
        return nums;

    }
};