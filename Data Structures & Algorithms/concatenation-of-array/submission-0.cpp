class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int j=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
                int temp = nums[i];
                ans.push_back(temp);
            }
        for(int i=0;i<n;i++){
                 int temp = nums[i];
                ans.push_back(temp);
            }
        
        return ans;
    }
};