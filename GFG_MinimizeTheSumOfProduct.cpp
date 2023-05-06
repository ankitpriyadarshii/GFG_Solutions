//Minimize the sum of product
//https://practice.geeksforgeeks.org/problems/minimize-the-sum-of-product1525/1


//{ Driver Code Starts
#include <iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

// } Driver Code Ends
class Solution {
public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
        sort(a, a + n);
        sort(b, b + n);
        int i = 0;
        int j = n - 1;
        long sum = 0;
        while (i < n) {
            sum += a[j] * b[i];
            i++;
            j--;
        }

        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int a[] = { 3, 1, 1 };
    int b[] = { 6, 5, 4 };
    int n = sizeof(a) / sizeof(a[0]);

    Solution ob;
    cout << ob.minValue(a, b, n) << endl;

    return 0;
}
// } Driver Code Ends