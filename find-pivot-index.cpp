class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        
        int allsum = 0, leftsum = 0;
        for(int i=0;i<nums.size();i++){
            allsum += nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            if(leftsum == (allsum - nums[i])){
                return i;
            }
            else{
                leftsum += nums[i];
                allsum -= nums[i];
            }
        }
        return -1;
    }
};
