class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        map<int, int> mp;

        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        for(auto i : mp) {
            for(auto j : mp) {

                if(i.first != j.first && i.second == j.second) {
                    return false;
                }
            }
        }

        return true;
    }
};