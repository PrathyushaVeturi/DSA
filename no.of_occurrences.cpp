/*
Problem Description
Given an array A and an integer B, find the number of occurrences of B in A.

Problem Constraints
1 <= B, Ai <= 109
1 <= length(A) <= 105

Input 1:
A = [1, 2, 2], B = 2 

Output 1:
2
*/

int Solution::solve(vector<int> &A, int B) {
    int B_count = 0;

    for(int i=0; i<A.size(); i++){
        if(A[i]==B) B_count++;
    }
    return B_count;
}
