// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int diff=arr[n-1]-arr[0];
        int small=arr[0]+k;
        int large=arr[n-1]-k;
        for(int i=0;i<n;i++)
        {
            int miin=min(small,arr[i+1]-k);
            int maax=max(large,arr[i]+k);
            if(miin<0)
            continue;
            diff=min(diff,maax-miin);
        }
        return diff;
    }
};