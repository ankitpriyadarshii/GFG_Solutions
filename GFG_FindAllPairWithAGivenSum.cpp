//Find all pairs with a given sum
//https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1


//{ Driver Code Starts
#include <iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here   
        vector<pair<int, int>> ans;
        map<int, int> m;
        for (int i = 0; i < N; i++)
            m[A[i]]++;

        for (int i = 0; i < M; i++) {
            int k = X - B[i];
            if (m.find(k) != m.end())
                ans.push_back({ k, B[i] });
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    long long t;
    int A[] = { 1, 2, 4, 5, 7 };
    int B[] = { 5, 6, 3, 4, 8 };
    int X = 9;

    int N = sizeof(A) / sizeof(A[0]);
    int M = sizeof(B) / sizeof(B[0]);

    Solution ob;
    vector<pair<int, int>> vp = ob.allPairs(A, B, N, M, X);
    int sz = vp.size();
    if (sz == 0)
        cout << -1 << endl;
    else {
        for (int i = 0; i < sz; i++) {
            if (i == 0)
                cout << vp[i].first << " " << vp[i].second;
            else
                cout << ", " << vp[i].first << " " << vp[i].second;
        }
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends