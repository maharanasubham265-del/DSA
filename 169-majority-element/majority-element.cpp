class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int m = arr.size();
        int n = 0;
        int count = 0;
        for(int i=0;i<m;i++){
            if(count == 0){
                n  = arr[i];
            }

            if(arr[i] == n){
                count++;
            }
            else{
                count--;
            }
        }
        return n;
    }
};