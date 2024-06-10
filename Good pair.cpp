/*
Problem Description
Given an array A and an integer B. A pair(i, j) in the array is a good pair if i != j and (A[i] + A[j] == B). Check if any good pair exist or not.

Problem Constraints
1 <= A.size() <= 104
1 <= A[i] <= 109
1 <= B <= 109

Example Input
Input 1:
A = [1,2,3,4]
B = 7
Example Output
Output 1:
1 
*/

int Solution::solve(vector<int> &A, int B) {
    
    /* Brute force solution - O(N^2).
     Here N = A.size()

    for(int i=0; i<A.size(); i++){
        for(int j=i+1; j<A.size(); j++){
            if ((A[i]+A[j])==B) return 1;
        }
    }
    return 0; */

    //-----

    // Optimised solution - O(1) => Uses hashing.
    unordered_set<int> seen;

    for (int i=0; i<A.size(); i++){
        int other_num = B-A[i];
        if (seen.find(other_num) != seen.end()){
            return 1; // pair found.
        }
        seen.insert(A[i]);
    }
    return 0; // No pair found.
}
