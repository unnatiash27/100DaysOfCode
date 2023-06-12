//Design a Skiplist without using any built-in libraries.


class Skiplist {
public:
vector<int>s;
    Skiplist() {
        
    }
    
    bool search(int target) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==target)
            return true;
        }
        return false;
    }
    
    void add(int num) {
        s.push_back(num);
    }
    
    bool erase(int num) {
        bool found=false;
        vector<int>temp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=num ||found)
            temp.push_back(s[i]);
            else 
            found=true;
        }
         s=temp;
        return found;
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */
