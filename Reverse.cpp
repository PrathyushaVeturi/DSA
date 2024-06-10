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
    
    // input the part of the array.
    cout<<"enter the part of the array: ";
    int l;
    cin>>l;
    int r;
    cin>>r;
    
    // Reverse a part of the array => using [l,r]
    int i=l; 
    int j=r;
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

/*
Output 1:
Enter the size of the array: 5

Enter 5 elements to be stored in the array: 
3 7 5 9 2
enter the part of the array: 1
3
3 9 5 7 2 

=== Code Execution Successful ===

Output 2:
Enter the size of the array: 5

Enter 5 elements to be stored in the array: 
3 7 5 9 2
enter the part of the array: 1 4
3 2 9 5 7 

=== Code Execution Successful ===
*/