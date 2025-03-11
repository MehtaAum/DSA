//( both are right but 2 method take less time )

//method : 1

// #include <bits/stdc++.h>
// vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {

//     vector<vector<int>> result;

//     sort(arr.begin(), arr.end()); // Sorting

//     for (int i = 0; i < n - 2; i++) {
//         if (i > 0 && arr[i] == arr[i - 1]) { // Skip duplicate values for i
//             continue;
//         }

//         for (int j = i + 1; j < n - 1; j++) {
//             if (j > i + 1 && arr[j] == arr[j - 1]) { // Skip duplicate values for j
//                 continue;
//             }

//             for (int d = j + 1; d < n; d++) {
//                 if (d > j + 1 && arr[d] == arr[d - 1]) { // Skip duplicate values for d
//                     continue;
//                 }

//                 if (arr[i] + arr[j] + arr[d] == K) {
//                     result.push_back({arr[i], arr[j], arr[d]});
//                 }
//             }
//         }
//     }

//     return result;
// }


//method : 2

#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
   
        
        vector<int> arr = {1,1,2,3,4,5,7};

        int n = arr.size();
        int K = 12;
        vector<vector<int>> ans;
    
        
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < n - 2; ++i) { 
            if (i > 0 && arr[i] == arr[i - 1]) { // Skip duplicates
                continue;
            }
            
            int left = i + 1; 
            int right = n - 1; 
            
            while (left < right) { 
                int sum = arr[i] + arr[left] + arr[right]; 
                
                if (sum == K) {
                    ans.push_back({arr[i], arr[left], arr[right]});
                    
                    while (left < right && arr[left] == arr[left + 1]) {// Skip duplicates
                        ++left; 
                    }
                    while (left < right && arr[right] == arr[right - 1]) {// Skip duplicates
                        --right;
                    }
                    
                    ++left;
                    --right;
                } else if (sum < K) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        
        // return ans;

        for(int p = 0; p < ans.size(); p++) {
            for(int l = 0; l < ans.size(); l++) {
                cout<<ans[p][l]<<" ";
            }
            cout<<endl;
        }
    }
