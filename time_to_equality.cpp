/*
Problem Description
Given an integer array A of size N. In one second, you can increase the value of one element by 1.
Find the minimum time in seconds to make all elements of the array equal.

Problem Constraints
1 <= N <= 1000000
1 <= A[i] <= 1000

Example Input
A = [2, 4, 1, 3, 2]


Example Output
8

Example Explanation
We can change the array A = [4, 4, 4, 4, 4]. The time required will be 8 seconds.
*/

int Solution::solve(vector<int> &A) {
    
    int max = A[0];
    
    for(int i=1; i<A.size(); i++){
        if(A[i] > max) max = A[i];
    }

    int diff = 0;

    for(int i=0; i<A.size(); i++){
        if(A[i] != max){
            diff = diff + (max-A[i]);
        }
    }
    return diff;
}
