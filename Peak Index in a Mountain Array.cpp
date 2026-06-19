//You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
//
//Return the index of the peak element.
//
//Your task is to solve it in O(log(n)) time complexity.

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1;
        int end=arr.size()-2;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            if(arr[mid-1]<arr[mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }


        }
        return -1;
    }
};
