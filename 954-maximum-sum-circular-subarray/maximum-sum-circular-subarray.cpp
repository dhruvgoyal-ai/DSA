class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        int min_ans=nums[0];
        int worst=nums[0];
        int best=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int a=nums[i];
            int b=nums[i]+best;
            int c=nums[i]+worst;
            best=max(a,b);
            worst=min(a,c);
            ans=max(ans,best);
            min_ans=min(min_ans,worst);
            sum=sum+nums[i];
        }
        if(ans<0){
            return ans;
        }
            return max(ans,sum-min_ans);

    }
};