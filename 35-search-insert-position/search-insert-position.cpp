class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0, hig=n-1;
        while(low<=hig){
            int mid=(low+hig)/2;
            if(arr[mid]>target){
                hig=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else return mid;
        }
        return low;
    }
    
};
