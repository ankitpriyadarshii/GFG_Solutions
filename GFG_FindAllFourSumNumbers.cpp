// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        set<vector<int>> st;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int x = j+1;
                int y = n-1;
                while(x < y)
                {
                    int temp = arr[i] + arr[j] + arr[x] + arr[y];
                    if(temp == k) 
                    {
                        if(st.find({arr[i], arr[j], arr[x], arr[y]}) == st.end()) ans.push_back({arr[i], arr[j], arr[x], arr[y]});
                        st.insert({arr[i], arr[j], arr[x], arr[y]});
                        x++;
                        y--;
                    }
                    else if(temp > k) y--;
                    else x++;
                }
            }
        }
        return ans;

    }
};