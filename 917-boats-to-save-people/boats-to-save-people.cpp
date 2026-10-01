class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        int boat=0;
        int n=arr.size();
        int i=0, j=n-1;
        sort(arr.begin(),arr.end());
        while(i<=j){
            if(arr[i]+arr[j] <= limit){
                boat++;
                i++;
                j--;
            }
            else {
                j--;
                boat++;
            }
        }
        return boat;
    }
};
