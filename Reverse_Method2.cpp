/*Problem Description
Given an array A of N integers and also given two integers B and C. Reverse the elements of the array A within the given inclusive range [B, C].
Problem Constraints
1 <= N <= 105
1 <= A[i] <= 109
0 <= B <= C <= N - 1
Example Input
Input 1:

A = [1, 2, 3, 4]
B = 2
C = 3
Example Output
Output 1:

[1, 2, 4, 3]
*/

vector<int> Solution::solve(vector<int> &A, int B, int C) {

    /* The below code has TC = O(A.size()) => O(N)
                          SC = O(v.size()) => O(N)

    vector<int> v;
    
    for(int i=0; i<B; i++){
        v.push_back(A[i]);
    }
    for(int i=C; i>=B; i--){
        v.push_back(A[i]);
    }
    x
    if (C!=A.size()-1){
        for(int i=C+1; i<A.size(); i++){
            v.push_back(A[i]);
        }
    }

    return v;
    */

    // The below code has TC = O(C-B+1) => In worst case of reversing the whole array => O(N)
    //                    SC = O(1) => In-place modification of the array.

    for(int i=B; i<=C; i++){
        swap(A[i], A[C--]);
    }
    return A;
}
