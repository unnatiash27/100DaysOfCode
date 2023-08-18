class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1, s2;
        vector<vector<int>> answer(2);
        for (auto num : nums1)
            s1.insert(num);
        for (auto num : nums2)
            s2.insert(num);
        for (auto num : s1) {
            if (s2.find(num) == s2.end()) {
                answer[0].push_back(num);
            }
        }
        for (auto num : s2) {
            if (s1.find(num) == s1.end()) {
                answer[1].push_back(num);
            }
        }
        return answer;
    }
};//2215. Find the Difference of Two Arrays
