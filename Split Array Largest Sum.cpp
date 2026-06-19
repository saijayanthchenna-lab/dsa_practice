//Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.
//
//Return the minimized largest sum of the split.
//
//A subarray is a contiguous part of the array.
//

class Solution {
public:
    bool isValid(vector<int>& nums, int k, long long maxAllowedSum) {
        int subarrays = 1;
        long long currSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (currSum + nums[i] <= maxAllowedSum) {
                currSum += nums[i];
            } else {
                subarrays++;
                currSum = nums[i];
            }
        }

        return subarrays <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        long long st = *max_element(nums.begin(), nums.end());
        long long end = 0;

        for (int num : nums) {
            end += num;
        }

        long long ans = end;

        while (st <= end) {
            long long mid = st + (end - st) / 2;

            if (isValid(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        return (int)ans;
    }
};
