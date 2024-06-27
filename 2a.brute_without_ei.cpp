// Q = [si,val]

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<vector<int>> Q = {{3,4},{1,3},{4,-2}};
    int N = 6;
    vector<int> A(N,0); // SC = O(N).
    
    // TC = O(Q*N).
    // This time there is no ending index. 
    // Therefore ending index = N-1 (always).
    for(int i=0; i<Q.size(); i++){
        int si = Q[i][0];
        int val = Q[i][1];
        for(int j=si; j<=N-1; j++){
            A[j] = A[j] + val;
        }
    }
    
    for(int i=0; i<N; i++){
        cout<<A[i]<<" ";
    }
    
    return 0;
}

/*

0 3 3 7 5 5 

*/