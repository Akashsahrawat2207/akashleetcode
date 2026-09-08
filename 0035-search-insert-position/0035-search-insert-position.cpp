class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int x;
        int start=0,end=n-1,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                x=mid;
                break;                    
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else {
                x=mid;
                end=mid-1;
            }
        }
        return x;

    }
};