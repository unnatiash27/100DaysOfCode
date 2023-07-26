

class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
     int count=0;
     vector<bool>visited(target.size(),false);
     vector<int>ans;
     while(count!=target.size())
     {
         bool b=true;
         for(int i=0;i<=target.size()-stamp.size();i++)
         {
             if(!visited[i] && canReplace(target,i,stamp))
             {
                 replace(target,i,stamp.size(),count);
                 b=false;
                 visited[i]=true;
                 ans.push_back(i);
             }
             if(count == target.size())
             break;
         }
         if(b)
         {
             vector<int>a;
             return a;
         }
     }   
     reverse(ans.begin(),ans.end());
     return ans;
    }


bool canReplace(string &target,int&ind,string &stamp)
{
    for(int i=0;i<stamp.size();i++)
    {
        if(target[ind+i]!='?'&&target[ind+i]!=stamp[i])
        return false;
    }
    return true;
}

void replace(string & target,int ind,int s,int &count)
{
    for(int i=0;i<s;i++)
    {
        if(target[ind+i]!='?')
        {
            target[ind+i]='?';
            count++;
        }
    }
}

};
