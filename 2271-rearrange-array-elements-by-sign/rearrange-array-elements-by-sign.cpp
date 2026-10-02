class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n= arr.size();
        int pos=0;
        int nev=1;
        vector<int> ans(n);

       for(int x: arr){
            if(x > 0){
               ans[pos] = x;
                pos+=2;
            }
            else{
                ans[nev] = x;
                nev+=2;
            }
        }
        return ans;
    }
};