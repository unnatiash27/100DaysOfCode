// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
//The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

class Solution {  
public:
    int removeDuplicates(vector<int>& nums) {
        int x=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[x] != nums[i])
            {
                x++;
                nums[x]=nums[i];
            }
        }  
        return x+1;
    }
};

//Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
//That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
//Return the answer in an array.

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int count=0;

            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};


//Design a HashSet without using any built-in hash table libraries.

class MyHashSet {
public:

vector<bool> hash;

    MyHashSet() {
        hash.resize(1e6+1,false);
    }
    
    void add(int key) {
     hash[key]=true;   
    }
    
    void remove(int key) {
        hash[key]=false;
    }
    
    bool contains(int key) {
        return hash[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */


//Design a HashMap without using any built-in hash table libraries.

class MyHashMap {
public:

unordered_map<int, int> map;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        map[key]=value;
    }
    
    int get(int key) {
        if (map.find(key) == map.end())  
           return -1;
        auto it=map.find(key);
        return it->second;
    }
    
    void remove(int key) {
        map.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */


// Return the list of cells (x, y) such that r1 <= x <= r2 and c1 <= y <= c2. The cells should be represented as strings in the format mentioned above and be sorted in non-decreasing order first by columns and then by rows.

class Solution
{
public:
    vector<string> cellsInRange(string s)
    {
        vector<string> ans;
        char a = s[0], b = s[3];
        int x = s[1] - '0', y = s[4] - '0';
        int mini, maxi;

        maxi = max(x, y);
        mini = min(x, y);

        char j = a;
        while (j <= b)
        {
            int i = mini;
            while (i <= maxi)
            {
                ans.push_back(j + to_string(i));
                i++;
            }
            j++;
        }

        return ans;
    }
};


// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1.
// If a string is longer than the other, append the additional letters onto the end of the merged string.
// Return the merged string.

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string ans;
        int i = 0, j = 0;
        while (i < word1.size() || j < word2.size())
        {
            if (i < word1.size())
                ans += word1[i++];
            if (j < word2.size())
                ans += word2[j++];
        }
        return ans;
    }
};


