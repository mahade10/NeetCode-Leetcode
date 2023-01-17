class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vs;
        for(int i=0; i< nums.size(); i++){
            int r = target-nums[i];
            for(int j = i+1;j<nums.size();j++){
                if(r == nums[j]){
                    vs.push_back(i);
                    vs.push_back(j);
                    return vs;
                }

            }
        }
        return vs;
    }
};
