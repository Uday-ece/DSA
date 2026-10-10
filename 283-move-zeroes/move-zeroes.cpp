class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1)
        return;
        
        int i=0;
        int j=1;
        for(int a = 0;j<nums.size();a++){
            if(nums[i]==0 && nums[j]!=0){
                  swap(nums[i],nums[j]);
                  i++;
                  j++;

            }
            else if(nums[i]!=0){
                i++;
                j++;
            }
            else if(nums[i]==0 && nums[j]==0)
               j++;
        }
    }
};