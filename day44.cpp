//Return an answer array (of length seq.length) that encodes such a choice of A and B:  answer[i] = 0 if seq[i] is part of A, else answer[i] = 1.  Note that even though multiple answers may exist, you may return any of them.



class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>p;
        int max=0;
        for(int i=0;i<seq.length();i++){
            if(seq[i]=='(') max++;
            p.push_back(max%2);
            if(seq[i]==')') max--; 
        }
        return p;
    }
};
