class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //int n=nums.size();
        //unordered_map<int,int>mpp;
       // for(int i=0;i<n;i++){
          //  if(mpp.count(nums[i] )&& i-mpp[nums[i]]<=k){
           //  return true;
           // }
               // mpp[nums[i]]=i;
      //  }
       // return false;
       unordered_set<int>window;
       for(int i=0;i<nums.size();i++){
        if(window.count(nums[i])){
            return true;
        }
        window.insert(nums[i]);
        if(window.size()>k){
            window.erase(nums[i-k]);
        }
       }
       return false;   
    }
};