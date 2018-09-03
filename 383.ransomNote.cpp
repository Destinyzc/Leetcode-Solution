class Solution{
public:
	bool canConstruct(string ransomNote,string magazine){
		vector<int> count(26,0);
		for(int i=0;i<magazine.size();i++)
			count[magazine[i]-'a']++;
		for(int i=0;i<ransomNote.size();i++)
			count[ransomNote[i]-'a']--;

		for(int i=0;i<ransomNote.size();i++){
			if(count[ransomNote[i]-'a']<0)
				return false;
		}
		return true;
	}
};

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(char c:magazine) ++m[c];
        for(char c: ransomNote){
            if(--m[c]<0)
                return false;
        }
        return true;
    }
};