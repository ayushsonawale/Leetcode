class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temps;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                temps.push_back(nums[i]);
            }            
        }
        for(int i = 0; i < temps.size(); i++){
            nums[i] = temps[i];
        }
        for(int i = temps.size(); i < nums.size(); i++){
            nums[i] = 0;
        }
        
    }
};