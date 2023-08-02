class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int l{}, r{n - 1}, fst{-1}, lst{-1};
        
        while(l <= r) {
            if(arr[l] != x) ++l;
            if(arr[r] != x) --r;
            if(arr[l] == x and arr[r] == x) return {l, r};
        }
        
        return {fst, lst};
    }
};