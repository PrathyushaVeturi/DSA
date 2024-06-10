/*Problem Description
Given an integer array A of size N and an integer B, you have to return the same array after rotating it B times towards the right.

Problem Constraints
1 <= N <= 105
1 <= A[i] <=109
1 <= B <= 109

Example Input
Input 1:
A = [1, 2, 3, 4]
B = 2

Example Output
Output 1:
[3, 4, 1, 2]
*/

void reverseArray(vector<int> &A, int start, int end){
    while(start<end){
        swap(A[start],A[end]);
        start++;
        end--;
    }
}

vector<int> Solution::solve(vector<int> &A, int B) {

    int N = A.size();
    
    B = B % N; //edge case - when B is greater than size of the array, N.
    
    /* 
    This is the brute force solution. TC = O(B*N). In the worst case, TC = O(N*N).
                                      SC = O(1).
    for(int i=1; i<=B; i++){
        int last_ele = A[N-1]; //last element
        for(int j=N-1; j>0; j--){ //shifting the elements to the right by 1
            A[j] = A[j-1];
        }
        A[0] = last_ele; //assigning the last element to the first.
    }
    return A;
    */

    // ------------------

    // Optimisation. 
    /* 1. Reverse the whole array.
       2. Reverse the first B elements.
       3. Reverse the remaining elements.
    */

    reverseArray(A,0,N-1); // (1)
    reverseArray(A,0,B-1); // (2)
    reverseArray(A,B,N-1); // (3)

    return A;
}
