class Solution {
public:
	int threeSumClosest(vector<int>& nums,int target) {
		int N=nums.size();
		sort(nums.begin(),nums.end());
		int closest=nums[0]+nums[1]+nums[2];
		int diff=abs(closest-target);
		for(int i=0;i<N-2;i++){
			int tmp=target-nums[i];
			int left=i+1,right=N-1;
			while(left<right){
				int newdiff=abs(nums[left]+nums[right]-tmp);
				int sum=nums[i]+nums[left]+nums[right];
				if(newdiff<diff){
					diff=newdiff;
					closest=sum;
				}
				if(sum<target)
					++left;
				else
					--right;
			}
		}
		return closest;
	}
};