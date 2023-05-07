//Third largest element
/*https://practice.geeksforgeeks.org/problems/third-largest-element/1*/

//{ Driver Code Starts
#include <iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

// } Driver Code Ends
class Solution {
public:
    int thirdLargest(int a[], int n)
    {
        //Your code here
        sort(a, a + n);
        return a[n - 3];
    }

};

//{ Driver Code Starts.

int main()
{
    int a[]{ 2,4,1,3,5 };
    int n = sizeof(a) / sizeof(a[0]);
    Solution obj;
    cout << obj.thirdLargest(a, n) << endl;
    return 0;
}
// } Driver Code Ends