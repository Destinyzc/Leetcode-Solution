class Solution {
public:
	vector<int> twoSum(vector<int>& nums,int target) {
		int N=nums.size();
		vector<int> res;
		map<int,int> subMap;
		for(int i=0;i<N;i++){
			int tmp=target-nums[i];
			auto it = subMap.find(tmp);
			//map<int,int>::iterator it=subMap.find(tmp);
			if(it!=subMap.end()){
				res.push_back(it->second)；
				res.push_back(i);
			}
			subMap[nums[i]]=i;
 		}
 		return res;
 	}
};
