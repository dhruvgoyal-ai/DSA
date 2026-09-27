class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;
        unordered_set<int> s;

        for (int x : nums) {
            if (s.count(x)) {
                return true;
            }

            s.insert(x);
        }

        return false;
    }
        
        
    
};