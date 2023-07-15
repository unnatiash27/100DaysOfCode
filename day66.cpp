//Return the sum of all digits with their corresponding sign.

class Solution {
	public:
		int alternateDigitSum(int n) {
			string num=to_string(n);
			int sum=0;
			for(int i=0;i<num.size();i++){
				if(i%2==0)sum+=num[i]-'0';
				else sum-=num[i]-'0';
			}
			return sum;
		}
	};
