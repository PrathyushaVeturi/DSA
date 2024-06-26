// Optimisation 1 using prefix sum array (or by modigying the input array).
// Here I modified the input array.

// TC = O(N) and SC = O(1).
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
    int max_len;
    int max_sum = INT_MIN;
    for(int i=0; i<N; i++){
        // adding the element if >=0 -> This doesnot hold the edge case of all zeroes.
        if(v[i]>=0){
            sum = sum + v[i];
            v[i] = sum;
            cout<<"sum = "<<sum<<" ";
        }
        // making the element as 0 if <0
        else if(v[i]<0){
            v[i] = 0;
            sum = 0;
            si = i; // index of the element that changed as 0 = starting index to find the length of the max sum subarray.
        }
        // finding the maximum sum 
        if(sum > max_sum){
            max_sum = sum;
            ei = i; // end index to find the length of the max sum subarray till now.
            max_len = ei-si+1; // length of the max sum subarray till now.
        }
    }
    cout<<endl;
    cout<<"max sum subarray = "<<max_sum<<endl;
    cout<<"max len = "<<max_len<<endl;
    cout<<"si = "<<si<<" ei = "<<ei<<endl;
    
    return 0;
}

/*

case 1: for v = {3,4,-1,-5,-3,2}  (The below is the wrong answer) -> 
    To show that this code doesnot work combination of (+ves) and (-ves).
sum = 3 sum = 7 sum = 2 
max sum subarray = 7
max len = 2
si = 4 ei = 1


=== Code Execution Successful ===

case 2: v = {4,5,2,1,6}
sum = 4 sum = 9 sum = 11 sum = 12 sum = 18 
max sum subarray = 18
max len = 5
si = 0 ei = 4


=== Code Execution Successful ===

case 3: v = {-4,-3,-6,-9,-2} (The below is the wrong answer) -> 
    To show that this code doesnot work for all -ves.
max sum subarray = 0
max len = 1
si = 4 ei = 0


=== Code Execution Successful ===

*/