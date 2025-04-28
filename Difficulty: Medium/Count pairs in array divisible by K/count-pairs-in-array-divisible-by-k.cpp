//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// User function Template for C++

class Solution {
  public:
    long long countKdivPairs(int A[], int n, int K)
    {
        vector<int> freq(K, 0);
        for(int i=0; i<n; i++){
            int ele = A[i]%K;
            freq[ele]++;
        }
        
        long long ans=0;
        for(int i=0; i<n; i++){
            int ele = A[i]%K;
            freq[ele]--;
            
            int target = K-ele;
            if(ele!=0){
                ans+=freq[target];
            }
            else{
                ans+=freq[0];
            }
        }
        return ans;
    }
};




//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	
cout << "~" << "\n";
}


	return 0;
}

// } Driver Code Ends