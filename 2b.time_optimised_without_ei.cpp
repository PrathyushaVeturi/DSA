// Q = [si,val]

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // TC = O(N+Q) and SC = O(N).
    vector<vector<int>> Q = {{3,4},{1,3},{4,-2}};
    int N = 6;
    vector<int> A(N,0); // SC = O(N).
    
    // Optimised solution.
    // step 1: Create an array, from which index, how much need to be added
    for(int i=0; i<Q.size(); i++){
        A[Q[i][0]] += Q[i][1];
    }
    
    cout<<"after completing step 1: ";
    for(int i=0; i<N; i++){
        cout<<A[i]<<" ";
    }
    
    cout<<endl;
    
    // step 2: generating prefix sum vector.
    vector<int> pf(N);
    pf[0] = A[0];
    for(int i=1; i<N; i++){
        pf[i] = pf[i-1] + A[i];
    }
    
    // final output vector.
    cout<<"Final Output: ";
    for(int i=0; i<N; i++){
        cout<<pf[i]<<" ";
    }
    
    return 0;
}

/*

after completing step 1: 0 3 0 4 -2 0 
Final Output: 0 3 3 7 5 5 

=== Code Execution Successful ===

*/
