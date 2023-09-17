
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &a, int n ) {
        //code here
        long long int sum=0,count=0;
        unordered_map<long long int,long long int>m;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum==0){
                count++;
            }
                if(m.find(sum)!=m.end()){
                    count=count+m[sum];
                }
                    m[sum]++;
        }
        return count;
    }
};