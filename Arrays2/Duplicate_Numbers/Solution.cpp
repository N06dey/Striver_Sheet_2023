class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> help;

        for(auto it:nums){
            if(help.find(it)!=help.end())
                return it;
            help.insert(it);
        }

        return -1;
    }
};
