class Solution {
public:
    // void helper(vector<int>& nums,int k,int p,int x,int& s,stack<int> arr,int i){
    //     if(x>=k || i==nums.size()){
    //         arr.pop();
    //         return;
    //     }
    //     if(x<k && arr.size()){
    //         // set.push(arr);
    //         s++;
    //     }
    //     cout<<x<<endl;
    //     // if(x==k)arr.pop();
    //     if(nums[i]%p==0){
    //         arr.push(nums[i]);
    //         helper(nums,k,p,x+1,s,arr,i+1);
    //     }
    //     else{
    //         arr.push(nums[i]);
    //         helper(nums,k,p,x,s,arr,i+1);
    //     }
    // }
    // int countDistinct(vector<int>& nums, int k, int p) {
    //     int x=0,i=0;
    //     int ans=0;
    //     stack<int> arr;
    //     helper(nums,k,p,x,ans,arr,i);
    //     return ans;
        
    // }
    int countDistinct(vector<int>& nums, int k, int p) {
        set<vector<int>> s;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                vector<int> arr;
                int cnt=0;
                for(int l=i;l<=j;l++){
                    arr.push_back(nums[l]);
                    if(nums[l]%p==0)cnt++;
                }
                if(cnt<=k)s.insert(arr);
            }
        }return s.size();
    }
};
