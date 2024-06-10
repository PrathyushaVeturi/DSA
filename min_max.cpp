/* 
Problem Description
Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

Input 1:
A = [-2, 1, -4, 5, 3]

Output 1:
1
*/

int Solution::solve(vector<int> &A) {

    // TC = O(N) and SC = O(1) -> Optimised.

    // If the below max and min are used, we need to loop from i=1.
    //int max = A[0];
    //int min = A[0];

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0; i<A.size(); i++){
        if(A[i] > max){
            max = A[i];
        }
        if(A[i] < min){
            min = A[i];
        }
    }

    return min+max;

}
