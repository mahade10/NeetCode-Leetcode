class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        for(auto v:intervals)cout<<v[0]<<" "<<v[1]<<"\n";
        vector<vector<int>>vs;
        vector<int>v1;
        int s = intervals[0][0];
        int end = intervals[0][1];
        for(int i=1; i<intervals.size();i++){
            if(end < intervals[i][0]){
                v1.push_back(s);
                v1.push_back(end);
                vs.push_back(v1);
                v1.clear();
                s=intervals[i][0];
                end=intervals[i][1];
            }
            else{
                end = max(end,intervals[i][1]);
            }
        }
        v1.push_back(s);
        v1.push_back(end);
        vs.push_back(v1);
        return vs;
    }
};
