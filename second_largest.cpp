/*
Problem Description
You are given an integer array A. You have to find the second largest element/value in the array or report that no such element exists.

Problem Constraints
1 <= |A| <= 105
0 <= A[i] <= 109

Input 1:
A = [2, 1, 2] 

Output 1:
1 
*/

int Solution::solve(vector<int> &A) {
    int max = INT_MIN;
    int sec_max = INT_MIN;


    if (A.size()<2){
        return -1;
    }

    for(int i=0; i<A.size(); i++){
        if (A[i]>max){
            sec_max = max;
            max = A[i];
        }
        else if(A[i]<max && A[i]>sec_max){
            sec_max = A[i];
        }
    }

    if (sec_max == INT_MIN) return -1;
    else return sec_max;
}
