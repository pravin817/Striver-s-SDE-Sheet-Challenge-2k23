class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // As we need to solve this problem in O(logn) and array is sorted in this case we will use the Binary Search

        int low  = 0;
        int high = nums.size()-1;

        while(low<=high){
            // find the mid 

            int mid = low+(high-low)/2;

            // check if the element is present in array

            if(nums[mid] == target){
                return mid;
            }else if(nums[mid]>target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        // If the element is not present in array then return its position ie. low

        return low;
    }
};

/*
    Analysis:
    Time Complexity : O(logn)
    space Complexity : O(1)
*/