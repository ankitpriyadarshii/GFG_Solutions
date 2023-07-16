class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        if (n == 0) return 0;
        if (n == 1) return arr[0];

        int prevPrevMax = arr[0]; 
        int prevMax = max(arr[0], arr[1]); 
        
        for (int i = 2; i < n; i++) {
           
            int currentMax = max(prevPrevMax + arr[i], prevMax);
           
            prevPrevMax = prevMax;
            prevMax = currentMax;
        }
        return prevMax;
    }
};