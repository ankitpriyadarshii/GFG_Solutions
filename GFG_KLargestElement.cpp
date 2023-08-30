//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> v;
	    vector<int> ans;
	    for (int i = 0; i<n ; i++){
	        v.push_back(arr[i]);
	    }
	    sort(v.begin(), v.end());
	    reverse(v.begin(), v.end());
	    
	    for (int i = 0; i < k; i++){
	        ans.push_back(v[i]);
	    }
	    
	    return ans;
	}

};