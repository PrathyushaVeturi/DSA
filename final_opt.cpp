// This holds all the cases.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> v = {3,4,-1,-5,-3,2};
    //vector<int> v = {4,5,2,1,6};
    //vector<int> v = {-4,-3,-6,-9,-2};
    int N = v.size();
    
    int sum = 0;
    int si = 0;
    int ei = 0;
    int max_len = 0;
    int max_sum = INT_MIN;
    int temp_start_idx = 0;
    
    for(int i=0; i<N; i++){
        // adding the element without checking >=0 
        sum = sum + v[i];
         // finding the maximum sum 
         if(sum > max_sum){
            max_sum = sum;
            si = temp_start_idx; // start index to find the length of the max sum subarray till now.
            ei = i; // end index to find the length of the max sum subarray till now.
        }
        // if sum = (-ve).
        if(sum<0){
            sum = 0;
            temp_start_idx = i+1; // index of the element that changed as 0 = starting index to find the length of the max sum subarray
        }
        max_len = ei-si+1; // length of the max sum subarray till now.
    }
    cout<<endl;
    cout<<"max sum subarray = "<<max_sum<<endl;
    cout<<"max len = "<<max_len<<endl;
    cout<<"si = "<<si<<" ei = "<<ei<<endl;
    
    return 0;
}

/*

max sum subarray = 7
max len = 2
si = 0 ei = 1


=== Code Execution Successful ===

*/
