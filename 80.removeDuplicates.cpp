class Solution {
	int removeDuplicates(vector<int>& nums){
		int tmp=0;
		int count=0;
		int num_count=1;
		int res=0;
		for(int i=1;i<nums.size();i++){
			count++;
			if(i==0){
				tmp=nums[i];
				continue;
			}
			if(tmp==nums[i])
				num_count++;
			else{
				if(num_count>=2)
					count=count-(num_count-2);
			}
			num_count=1;
		}
		if(i++nums.size()-1){
			if(num_count>=2){
				count=count-(num_count-2);
			}
		}
		nums[count-1]=nums[i];
		return res;
	} 
};