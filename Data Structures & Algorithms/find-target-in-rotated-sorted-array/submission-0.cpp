class Solution {
public:
int helper(int i,int j,int target,vector<int>&nums){
    while( i<=j){
        int mid=i+(j-i)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            j=mid-1;
        }else{
            i=mid+1;
        }
    }
    return -1;

}
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        int pivot=l;
        if(pivot!=0&&helper(0,pivot-1,target,nums)!=-1){
            return helper(0,pivot-1,target,nums);
        }
        return helper(pivot,n-1,target,nums);

        
    }
};
