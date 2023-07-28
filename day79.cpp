//Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

class Solution {
public:
    int myAtoi(string s) {  
        int len = s.size();
        double num=0;
        int i=0;
        while(s[i]==' ')   
        {     
            i++;
        }  
        bool positive=s[i]=='+';
        bool negative=s[i]=='-';
        positive==true?i++:i;
        negative==true?i++:i;
        while(i < len && s[i] >= '0' && s[i] <= '9'){
            num = num*10 + (s[i]-'0');
            i++;
        }
        num=negative?-num:num;
        num = (num > INT_MAX) ? INT_MAX : num;  
        num = (num < INT_MIN) ? INT_MIN : num;
        return int(num);
    }  
};
