class Solution {
public:
    bool check(vector<int> arr,int x,int d){
        int low=0,high=arr.size()-1,mid;
        while(low<=high){
            mid = low + (high - low) / 2;
            if(arr[mid]< x-d)low=mid+1;
            else if(arr[mid] > x+d)high=mid-1;
            else return false;
        }
        return true;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int ans=0;
        for(int i=0;i<arr1.size();i++){
            if(check(arr2,arr1[i],d))ans++;
        }
        return ans;
    }
};
