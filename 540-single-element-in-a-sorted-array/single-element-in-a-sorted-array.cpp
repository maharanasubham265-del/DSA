class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        if (n==1) return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2]) return arr[n-1]; 
        int l=0, h=n-1;
        while (l<=h){
         int mid= (l+h)/2;
         if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]) return arr[mid];
         int f= mid , s= mid;  // f is 1st mid , s is 2nd mid
         if (arr[mid] == arr[mid+1]) s=mid+1;
         else f=mid-1;
         if( (f-l) % 2 == 0) l= s+1; // f-l is length of left side
         else h= f-1;
        }
        return 67;
    }
};