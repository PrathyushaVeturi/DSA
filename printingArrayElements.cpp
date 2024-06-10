
#include <iostream>
using namespace std;

int main() {
    
    // inputting the size of the array.
    int N;
    cout<<"Enter the size of the array: ";
    cin>>N;
    
    cout<<endl;
    
    // declaration of array with the dynamic size.
    int* arr = new int[N];

    cout<<"Enter "<<N<<" elements to be stored in the array: "<<endl;
    
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    
    //printing all the elements of the array by iterating.
    for(int i=0; i<N; i++){
        cout<<arr[i]<<", ";
    }

    return 0;
}

/*

output:

Enter the size of the array: 5

Enter 5 elements to be stored in the array: 
1 5 3 8 10
1, 5, 3, 8, 10, 

=== Code Execution Successful ===

*/