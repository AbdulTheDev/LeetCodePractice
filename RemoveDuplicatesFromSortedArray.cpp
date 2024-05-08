class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i = 0; i < nums.size()-1; i++) {
            int j = i+1;
            while (nums[i] == nums[j] && nums.size() > j){
                vector<int>::iterator pos = nums.begin() + j;
                nums.erase(pos);
            }
        }
        return nums.size();
    }
};
