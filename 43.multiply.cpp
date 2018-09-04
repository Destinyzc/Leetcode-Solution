class Solution {
public:
	string multiply(string num1,string num2){
		int n1=num1.size(),n2=num2.size();
		vector<int> tmp(n1+n2,0);
		int k=n1+n2-2;
		string res="";
		for(int i=0;i<n1;i++){
			for(int j=0;i<n2;j++)
				tmp[k-i-j]=(num1[i]-'0')*(num2[i]-'0');
			int carry=0;
			for(int i=0;i<k+2;i++){
				tmp[i]+=carry;
				carry=tmp[i]/10;
				tmp[i]%=10;
			}
		}
		int i=k+1;
		while(tmp[i]==0)
			i--;
		if(i<0)
			return "0";
		for(;i>=0;i--){
			res.push_back(tmp[i]+'0');
		}
		return res;
	}
}