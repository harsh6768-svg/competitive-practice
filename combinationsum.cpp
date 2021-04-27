class Solution {

void backtrack(vector<int>&candidates , int target , vector<vector<int>>&res , vector<int>&comb , int idx)
{
	if(target==0)
	{
		res.push_back(comb);
		return ;
	}

	for(int i = idx ; i< candidates.size()  and target>=candidates[i]; i++)
	{
		comb.push_back(candidates[i]);
		backtrack(candidates , target-candidates[i] , res, comb , i);
		comb.pop_back();
	}
}

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res ;
        vector<int>comb ;

        backtrack(candidates, target , res , comb , 0);
        return res;
    }
};