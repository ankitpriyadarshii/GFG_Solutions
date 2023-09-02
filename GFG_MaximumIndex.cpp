class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int mini[n];//storing min elements from the arr.
        int maxi[n];//storing max elements from the arr.
        
        mini[0] = arr[0]; //first element is equal to the arr first ele.
        maxi[n-1] = arr[n-1];//last index value equal to arr last index.
        
        for(int i = 1; i < n; i++) 
            mini[i] = min(mini[i-1], arr[i]); //store min
        for(int i = n-2; i >= 0; i--) 
            maxi[i] = max(maxi[i+1], arr[i]); //store max
        
        int ans = 0;
        int i = 0, j = 0;
        while(j < n && i < n)
        {
            while(maxi[j] >= mini[i] && j < n) 
                j++;//max[j]>min[i]
            ans = max(ans, j-1-i);//finding max of j and i.
            i++;
        }
        
        return ans; 
    }

};