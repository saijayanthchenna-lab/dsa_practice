//A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
//
//For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
//The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int pivt=-1,n=A.size();
        for(int i=n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                pivt=i;
                break;
            }
        }
        if(pivt==-1){
            reverse(A.begin(),A.end());
            return;
        }
        for(int i=n-1;i>pivt;i--){
            if(A[i]>A[pivt]){
                swap(A[i],A[pivt]);
                break;
            }
        }
        int i=pivt+1;
        int j=n-1;
        while(i<=j){
            swap(A[i++],A[j--]);
        }
    }
};
