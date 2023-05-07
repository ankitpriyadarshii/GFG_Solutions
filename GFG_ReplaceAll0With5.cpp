//Replace all 0's with 5
/*https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1*/

//{ Driver Code Starts
#include <iostream>
#include<vector>
#include<map>
#include<algorithm>



using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    string intStr = to_string(n);
    for (int i = 0; i < intStr.size(); i++) {
        if (intStr[i] == '0')
            intStr[i] = '5';
    }

    int ans = stoi(intStr);
    return ans;
}