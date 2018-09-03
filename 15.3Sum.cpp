class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums){
		vector<vector<int>> res;
		sort(nums.begin(),nums.end());//对数组进行排序
		for(int i=0;i<nums.size();i++){   //固定第一个数
			if(nums[i]>0)
				continue;	//意味着后面的数都是正数，不可能为零了
			if(i>0 && nums[i-1]==nums[i])   //相同的数不固定两次
				continue;
			int target=0-nums[i];
			int left=i+1,right=nums.size()-1;
			while(left<right){   //双指针法
				if(nums[left]+nums[right]==target){
					res.push_back({nums[i],nums[left],nums[right]});
					while (nums[left]==nums[left+1])
						++left;//跳过重复的数
					while(nums[right]==nums[right-1])
						--right;
					++left;
					--right;
				}
				else if(nums[left]+nums[right]<target)
					++left;
				else
					--right;
			}
		}
		return res;
	}
}