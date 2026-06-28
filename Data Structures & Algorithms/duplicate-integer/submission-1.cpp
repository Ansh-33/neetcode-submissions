class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
          sort(nums.begin(), nums.end());
        int flag =0;
        if(nums.size() == 0 ) return false;\
        
        for(int i = 0;i<nums.size()-1 ;i++){
            if(nums[i] == nums[i+1]) flag++;
        }
    
        if(flag > 0) return true;
        else return false;
    }
};