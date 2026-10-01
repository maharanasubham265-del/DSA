class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n= arr.size();
        vector<int >ans(2,-1);
        // First Occurance
        int low=0, hig=n-1;
        while(low<=hig){
            int mid=(low+hig)/2;
            if(arr[mid]>target){
                hig=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
               ans[0]=mid;
                hig=mid-1;
            }
        }
        // Last Occurance
         low=0; 
         hig=n-1;
        while(low<=hig){
            int mid=(low+hig)/2;
            if(arr[mid]>target){
                hig=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
               ans[1]=mid;
                low=mid+1;
            }
        }
        return ans;
    }
    
};
