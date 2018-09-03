class Solution {
public:
	vector<vector<int>> fourSum(vector<int> nums,int target){
		vector<vector<int>> res;
		sort(nums.begin(),nums.end());
		int N=nums.size();
		for(int i=o;i<N-3;i++){
			for(int j=i+1;j<N-2;j++){
				int left=j+1,right=N-1;
				while(left<right){
					if(nums[i]+nums[j]+nums[left]+nums[right]==target){
						res.push_back({nums[i],nums[j],nums[left],nums[right]});
						while(left<right && nums[left]==nums[left+1])
							left++;
						while(left<right && nums[right]==nums[right-1])
							right--;
					}
					else if (nums[i]+nums[j]+nums[left]+nums[right]>target)
						right--;
					else
						left++;
				}
				while(j<N-2 && nums[j]==nums[j+1])
					j++;
				while(i<N-3 && nums[i]==nums[i+1])
					i++;
			}
		}
		return res;
	}
}