class Solution {
public:
    void fun(vector<vector<int>>& re,vector<int>& candidates, int target,vector<int>& a,int i)
    {
        if(target==0)
        {
            re.push_back(a);
            return;
        }else if(target<0)
        {
            return;
        }
        for(int j=i;j<candidates.size();++j)
        {
        	a.push_back(candidates[j]);
        	fun(re,candidates,target-candidates[j],a,j);
        	a.pop_back();
		}
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> a;
        fun(result,candidates,target,a,0);
        return result;
    }
    
};