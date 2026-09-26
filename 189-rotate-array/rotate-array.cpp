class Solution {
    //public: void reverse(vector<int>&nums,int start,int end){
        //while(start<=end){
       // int temp=nums[start];
       // nums[start]=nums[end];
      //  nums[end]=temp;
      //  start++;
       // end--;}
public:
    void rotate(vector<int>& nums, int k) {
         //int n=nums.size();
      //  if(k%n==0){
           // return;
      //  }
       // k=k%n;
      //  reverse(nums,0,n-1);
        //reverse(nums,0,k-1);
       // reverse(nums,k,n-1);
       int n=nums.size();
       int count=0;
       for(int i=0;count<n;i++){
        int idex=i;
        int curr=nums[idex];
         do{
            int next=nums[(idex+k)%n];
            nums[(idex+k)%n]=curr;
            curr=next;
            idex=(idex+k)%n;
            count=count+1;
        }while(idex!=i); 
       }  
    }};
