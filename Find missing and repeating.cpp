class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int> ans;
        
        int miss=0,repeat=0;
        // cout<<endl;
        for(int i=0;i<n+1;i++){
            if(arr[i]==arr[i+1]){
                repeat=arr[i];
                break;
            }
        
        }
        for (int i = 0; i < n; i++) {
            if(arr[i]!=i+1){
                miss=i+1;
                if(miss<repeat)break;
            }
        }
        ans.push_back(repeat);
        ans.push_back(miss);
        
        return ans;
        
    }
};
