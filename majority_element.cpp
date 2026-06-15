//Given an array nums of size n, return the majority element.
//
//The majority element is the element that appears more than ?n / 2? times. You may assume that the majority element always exists in the array.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int freq=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(freq==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }

        
    return ans;
    }

};
