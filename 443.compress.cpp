class Solution {
public:
	int compress(vector<char>& chars) {
		int index=0;
		int i;
		int count;
		if(chars.size()<2)
			return chars.size();
		for(int i=0;i<chars.size;){
			count=1;
			chars[index++]=chars[i++];
			while(i<chars.size() && chars[i]==char[i-1]){
				i++;
				count++;
			}
			if(count>1){
				string tmp=to_string(count);
				for(int x=0;x<tmp.size();x++)
					chars[index++]=tmp[x];
			}
		}
		return index;
	}
};