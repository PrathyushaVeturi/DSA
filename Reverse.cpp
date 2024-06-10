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
    
    // Reversing the elements => using swap()
    int i=0; 
    int j=N-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    //printing all the elements of the array by iterating.
    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

/* Output 1: (for even size of the array)
Enter the size of the array: 6

Enter 6 elements to be stored in the array: 
3 7 5 9 2 8
8 2 9 5 7 3 

=== Code Execution Successful ===

Output 2: (for odd size)
Enter the size of the array: 5

Enter 5 elements to be stored in the array: 
3 7 5 9 2
2 9 5 7 3 

=== Code Execution Successful ===
*/