#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // TC = O(N+Q) and SC = O(N).
    vector<vector<int>> Q = {{1,2,10},{2,3,20},{2,5,25}};
    int N = 6;
    vector<int> A(N,0); // SC = O(N).
    
    // Optimised solution.
    // step 1: 
    for(int i=0; i<Q.size(); i++){
        int si = Q[i][0];
        int ei = Q[i][1];
        int val = Q[i][2];
        A[si] += val;
        if((ei+1)<=(N-1)){
            A[ei+1] -= val;
        }
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

after completing step 1: 0 10 45 -10 -20 0 
Final Output: 0 10 55 45 25 25 

=== Code Execution Successful ===

*/