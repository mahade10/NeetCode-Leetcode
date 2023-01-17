class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            mp[x]++;
        }
        
        for(auto x:mp){
            if(x.second>1)
                return true;
        }
        return false;
    }
};
