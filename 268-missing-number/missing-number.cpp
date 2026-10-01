class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i] != i){
                return i;
            }
        }
        return n;
    }
};


// int n =nums.size();
        // for(int i=0;i<=n;i++){
        //     bool flag=false;
        //     for(int ele:nums){
        //         if(i == ele){
        //             flag=true;
        //             break;
        //         }
        //     }
        //     if(flag==false){
        //         return i;                
        //     }
        // }
        // return 0;

        