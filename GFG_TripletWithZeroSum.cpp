//Find triplets with zero sum
//https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1

//{ Driver Code Starts
#include<iostream>
#include<stdlib.h>
#include<iostream>
#include <algorithm>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution {
public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    {
        //Your code here
        sort(arr, arr + n);
        for (int i = 0; i < n; i++) {
            int l = i + 1;
            int r = n - 1;
            while (l < r) {
                int sum = arr[i] + arr[l] + arr[r];
                if (sum == 0)
                    return true;
                else if (sum > 0)
                    r--;
                else if (sum < 0)
                    l++;
            }
        }

        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[] = { 0, -1, 2, -3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution obj;
    if (obj.findTriplets(arr, n))
        cout << "1" << endl;
    else
        cout << "0" << endl;
    return 0;
}

// } Driver Code Ends