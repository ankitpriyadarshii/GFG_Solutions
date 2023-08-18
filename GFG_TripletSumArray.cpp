class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        unordered_map<int,int>mp;
        
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int l=i+1;
            int r=n-1;
            int sum=0;
            while(l<r){
                sum=A[i]+A[l]+A[r];
                
                if(sum==X)
                    return true;
                if(sum<X)
                    l++;
                else if(sum>X)
                    r--;
            }
            
            
        }
        
        return false;

    }

};