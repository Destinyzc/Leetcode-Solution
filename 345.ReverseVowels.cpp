class Solution {
public:
    string reverseVowels(string s) {
        int left=0,right=s.size()-1;
        while(left<right){
            if(isVowels(s[left]) && isVowels(s[right]))
                swap(s[left++],s[right--]);
            else if(isVowels(s[left]))
                right--;
            else
                left++;
        }
        return s;        
    }
    
    bool isVowels(char c){
        return c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u';
    }
};




class Solution {
public:
	string reverseVowels(string s){
		vector<int> v;
		for(int i=0;i<s.size();i++){
			if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
				v.push_back(i);
		}

		for(int i=0,j=v.size()-1;i<j;i++,j--){
			swap(s[v[i]],s[v[j]]);
		}
		return s;
	}
};