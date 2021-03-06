class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int size=nums.size(),low=0,high=size-1,mid=0;
        while(low<=high){
            mid=low+(high-low)/2;
            if(target==nums[mid])
                return true;
            if(nums[mid]<nums[high]){
                if(target>nums[mid]&&target<=nums[high])
                    low=mid+1;
                else
                    high=mid-1;
            }
            else if(nums[mid]>nums[high]){
                if(target>=nums[low]&&target<nums[mid])
                    high=mid-1;
                else
                    low=mid+1;
            }
            else
                high--;
        }
        return false;
    }
};
