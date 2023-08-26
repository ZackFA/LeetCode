/* Given a sorted array of distinct integers and a target value, r
eturn the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity. */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0,mid,right=nums.size();
        while(left<=right)
        {
            mid = (left+right)/2;
            if(nums[mid]==target)
            {
                return mid;
            }else if(nums[mid]<target)
            {
                left = mid+1;
            }else
            {
                right = mid-1;
            }
        }
        return left;
    }
};
