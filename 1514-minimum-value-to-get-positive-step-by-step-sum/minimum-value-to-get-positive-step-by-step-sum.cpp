class Solution {
public:
bool valid(vector<int>& nums, int mid) {
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        mid = mid + nums[i];

        if(mid < 1) {
            return false;
        }
    }

    return true;
}
int minStartValue(vector<int>& nums) {
    int l = 1, r = 10001;
    int result = 1;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        if(valid(nums, mid) == true) {
            result = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    return result;
}

};