class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& ac) {
        sort(ac.begin(), ac.end());
        vector<string> ans;
        if(ac.size()<2)return {};
        set<string> mySet;
        for (int i = 0; i < ac.size() - 2; i++) {
            if (ac[i][0] == ac[i + 1][0] && ac[i + 1][0] == ac[i + 2][0]) {
                int x = abs(stoi(ac[i+1][1]) - stoi(ac[i ][1]));
                int y = abs(stoi(ac[i + 2][1]) - stoi(ac[i][1]));
                if (x < 100 && y < 100) {
                    mySet.insert(ac[i][0]);
                }
            }
        }
        for(auto x:mySet){
            ans.push_back(x);
        }
        return ans;
    }
};
