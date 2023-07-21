//Given the number of friends, n, and an integer k, return the winner of the game.

class Solution {  
public:
    int findTheWinner(int n, int k) {  
        if(k == 1)
            return n;
        queue<int>q;
        int c=1,temp;
        for(int i=1;i<=n;i++)
        q.push(i);
        while(!q.empty()&&q.size()>1)
        {
            if(c==k)
            {
                q.pop(); 
                c=1;
            }
            else
            {
                temp=q.front();  
                q.pop();  
                q.push(temp);
                c++;
            }
        }
        return q.front();  
    }
};
