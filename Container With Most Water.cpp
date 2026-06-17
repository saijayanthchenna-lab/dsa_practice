//You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
//
//Find two lines that together with the x-axis form a container, such that the container contains the most water.
//
//Return the maximum amount of water a container can store.
//
//Notice that you may not slant the container.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0;
        int rp=n-1;
        int ans=0;
        while(lp<rp){
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int area=w*ht;
            ans=max(area,ans);
            height[lp]<height[rp]?lp++:rp--;

        }
        
        return ans;
    }
};
