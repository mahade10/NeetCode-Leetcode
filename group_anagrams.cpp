class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>mp; 
        vector<string>vs;
        vector<vector<string>>vs3;
        
        int s = strs.size();
        for(int i=0;i<s;i++){
            string str = strs[i];
            sort(str.begin(), str.end());
            mp[str].push_back(strs[i]);
        }
        for(auto x: mp){
            vs3.push_back(x.second);
        }
        return vs3;
    }
};
