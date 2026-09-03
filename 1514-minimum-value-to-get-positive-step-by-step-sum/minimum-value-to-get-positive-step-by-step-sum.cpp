class Solution {
public:

int minStartValue(vector<int>& nums) {
   int n=nums.size();
   int sum=0;
   int minv=0;
   for(int i=0; i<n; i++){
    sum+=nums[i];
    minv=min(minv, sum);

   }
   return -minv+1;
}
};