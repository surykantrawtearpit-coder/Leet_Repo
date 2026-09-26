class Solution {
public:

    void allSubsets(vector<int> &arr, vector<int> &ans, int i, vector<vector<int>> &getallSubsets) {
        if(i == arr.size()) {
            getallSubsets.push_back({ans});
            return;
            
    }

    ans.push_back(arr[i]);
    allSubsets(arr, ans, i+1, getallSubsets);

    ans.pop_back();
    allSubsets(arr, ans, i+1,getallSubsets);
    }
    vector<vector<int>> subsets(vector<int> &arr) {
        vector<vector<int>> getallSubsets;
        vector<int> ans;

        allSubsets(arr, ans, 0, getallSubsets);
        return getallSubsets;
        
    }
};