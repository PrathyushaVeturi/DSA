// The Q contains start index, end index and the value to be added = [si,ei,val].


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<vector<int>> Q = {{1,2,10},{2,3,20},{2,5,25}};
    int N = 6;
    vector<int> A(N,0); // SC = O(N).
    
    // TC = O(Q*N).
    for(int i=0; i<Q.size(); i++){
        int si = Q[i][0];
        int ei = Q[i][1];
        int val = Q[i][2];
        for(int j=si; j<=ei; j++){
            A[j] = A[j] + val;
        }
    }
    
    for(int i=0; i<N; i++){
        cout<<A[i]<<" ";
    }
    
    return 0;
}

/*

0 10 55 45 25 25

*/