/*
Problem Description
Given an array A of N integers. 
Count the number of elements that have at least 1 elements greater than itself.

Problem Constraints
1 <= N <= 105
1 <= A[i] <= 109

Input 1:
A = [3, 1, 2]

Output 1:
2

Explanation 1:
The elements that have at least 1 element greater than itself are 1 and 2
*/

int Solution::solve(vector<int> &A) {
    int count = 0;

    /*

    // The below code runs in TC, O(N*N) and SC = O(1).

    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A.size(); j++){
            if(A[i]<A[j]){
                count++;
                break;
            }
        }
    }
    */

    // Optimised solution => TC = O(N) and SC = O(1).

    //finding the max element.
    int max = A[0];
    for(int i=1; i<A.size(); i++){
        if(A[i]>max){
            max = A[i];
        }
    }

    // finding no. of elements in the array > max element.
    for(int i=0; i<A.size(); i++){
        if(A[i] != max){
            count++;
        }
    }

    return count;
}
