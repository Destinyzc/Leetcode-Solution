class Solution {
public:
	bool detectCapital(string word){
		int cnt=0;
		for(auto w : word){
			if(isupper(w))
				cnt++;
		}
		return (cnt==0 || cnt==word.size() || (cnt==1 && isupper(word[0])));
	}
};


class Solution {
public:
    bool detectCapitalUse(string word) {
        int N=word.size();
        if(N==1)
            return true;
        if(N==2){
            if(!isCapital(word[0]) && isCapital(word[1]))
                return false;
            else
                return true;
        }
        if(isCapital(word[0])){
            if(isCapital(word[1])){
                for(int i=2;i<N;i++){
                    if(!isCapital(word[i]))
                        return false;
                }
                return true;
            }
            else{
                for(int i=2;i<N;i++){
                if(isCapital(word[i]))
                    return false;
            }
            return true;
            }
        }
        else{
            for(int i=1;i<N;i++){
                if(isCapital(word[i]))
                    return false;
            }
            return true;
        }
    }
    
    bool isCapital(char c){
        return (c>=65 && c<=90);
    }
};