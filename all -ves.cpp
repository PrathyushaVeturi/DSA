// This holds the edge case of all -ves in the array.

// TC = O(N) and SC = O(1).

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    //vector<int> v = {3,4,-1,-5,-3,2};
    //vector<int> v = {4,5,2,1,6};
    vector<int> v = {-4,-3,-6,-9,-2};
    int N = v.size();

    int sum = 0;
    int si = 0;
    int ei = 0;
    int max_len;
    int max_sum = INT_MIN;
    for(int i=0; i<N; i++){
        // adding the element without checking >=0 (holds the edge case if all are -ves in the vector)
        sum = sum + v[i];
         // finding the maximum sum 
         if(sum > max_sum){
            max_sum = sum;
            ei = i; // end index to find the length of the max sum subarray till now.
        }
        // making the element as 0 if <0
        if(v[i]<0){
            v[i] = 0;
            sum = 0;
            si = i; // index of the element that changed as 0 = starting index to find the length of the max sum subarray.
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

max sum subarray = -2
max len = 1
si = 4 ei = 4


=== Code Execution Successful ===

*/