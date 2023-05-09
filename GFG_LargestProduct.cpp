//Largest product
//https://practice.geeksforgeeks.org/problems/largest-product/1

//{ Driver Code Starts
#include <iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
#define ll long long

ll findMaxProduct(int A[], int n, int k);

int main() {
	
	int a[] = { 1, 2, 3, 4 };
	int n = sizeof(a) / sizeof(a[0]);
	int k = 2;

	cout << findMaxProduct(a, n, k) << endl;
	return 0;
}

// } Driver Code Ends


/*You are required to complete the function*/

long long findMaxProduct(int A[], int n, int k) {

	long long ans = -1;
	for (int i = 0; i <= n - k; i++) {
		long long product = 1;
		for (int j = i; j < i + k; j++) {
			product *= A[j];
		}
		ans = max(product, ans);
	}

	return ans;
}

