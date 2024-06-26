// Find the maximun sum subarray.

// BRUTE FORCE SOLUTION => Iterating through all the subarrays and finding the max_sum.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {-3, 2, 4, -1, 3, -4, 3}; // combination of +ves and -ves.
    //vector<int> v = {4,5,2,1,6}; // All +ves.
    //vector<int> v = {-4,-3,-6,-9,-2}; // All -ves.
    int N = v.size();
    int max_len = 0;
    int max_sum = v[0]; // max_sum = INT_MIN also gives the same output as below.
    int si, ei;
    // TC = O(N*N*N) and SC = O(1).
    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum = sum + v[k];
            }
            if(sum > max_sum){
                max_sum = sum;
                max_len = j-i+1;
                si = i;
                ei = j;
            }
        }
    }
    cout<<"max sum subarray = "<<max_len<<endl;;
    cout<<"sub array = "<<" ";
    for(int i=si; i<=ei; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

/*
case 1: 
v = {-3, 2, 4, -1, 3, -4, 3} ===> for combination of +ves and -ves 
max sum subarray length= 4
max sum of the subarray = 8
sub array =  2 4 -1 3 

=== Code Execution Successful ===

case 2: 
for v = {4,5,2,1,6} ===> All Positives (max_sum = sum of all the elements in the array)
max sum subarray length= 5
max sum of the subarray = 18
sub array =  4 5 2 1 6 

=== Code Execution Successful ===

case 3:
for v = {-4,-3,-6,-9,-2} ===> All negatives (max_sum = greatest negative number)
max sum subarray length= 1
max sum of the subarray = -2
sub array =  -2 

=== Code Execution Successful ===
*/


/*

Edge Cases: (max_sum = v[0] / max_sum = INT_MIN)

If the array contains all negative numbers, 
both versions will work correctly. 

Version 1 explicitly starts with INT_MIN, 
ensuring it captures the correct maximum sum,
 
whereas Version 2 starts with the first element, 
which also works but implicitly assumes the array is non-empty.

*/