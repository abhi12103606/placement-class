//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
       int n=arr.size();
       int s=0;
       int ml=0;
       int end_index=-1;
       unordered_map<int,int>m;
       m[0]=-1;
       for(int i=0;i<n;i++){
           s+=arr[i];
           if(m.find(s)!=m.end() || s==0){
               if(ml<i-m[s]){
                   ml=i-m[s];
                   end_index=i;
               }
           }
           
           else {
               m[s]=i;
           }
       }
       
       
       return ml;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends