class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> tempNums;
        int newVec = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                tempNums.push_back(nums[i]);
                newVec++;
            }
        }
        nums = tempNums;
        return newVec;
    }
};
