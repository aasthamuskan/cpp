class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        else{
            int ptr=nums[0];
            int c=0;
            for(int i=1;i<nums.size();i++){
                if(nums[c] != nums[i]){
                    nums[++c]= nums[i];
                }
            }
            return c+1;
        }
    }
};