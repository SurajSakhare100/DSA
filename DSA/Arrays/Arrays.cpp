#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return the index if element is found
        }
    }
    return -1;  // Return -1 if the element is not found
}
void reverseArray(int lineararr[]){

    int s=0;
    int e=5;
    while(s<e){
        swap(lineararr[s],lineararr[e]);
        s++;
        e--;
    }

}

int main() {
    // int arr[5] = {10, 20, 30, 40, 50};  // Declare and initialize array
    
    // // Print all elements of the array
    // for (int i = 0; i < 5; i++) {
    //     cout << "Element at index " << i << ": " << arr[i] << endl;
    // }
    
    // // Modify an element
    // arr[2] = 100;
    // cout << "After modifying, element at index 2: " << arr[2] << endl;

    // int size = sizeof(arr) / sizeof(arr[0]);
    // cout<<"size of array: "<<size<<endl;
    // int smallest = INT_MAX;
    // int largest = INT_MIN;

    // // Traverse the array to find the smallest and largest elements

    // for (int i = 0; i < size; i++) {
    //     if (arr[i] < smallest) {
    //         smallest = arr[i];  // Update smallest if current element is smaller
    //     }
    //     if (arr[i] > largest) {
    //         largest = arr[i];  // Update largest if current element is larger
    //     }
    // }

    // // alternate way

    // // for (int i = 1; i < size; i++) {
    // //     smallest=min(smallest,arr[i]);
    // //     largest=max(largest,arr[i]);
    // // }

    // // Output the results
    // cout << "Smallest element: " << smallest << endl;
    // cout << "Largest element: " << largest << endl;

    // smallest = INT_MAX;
    // largest = INT_MIN;
    // int min_index=0;
    // int max_index=0;
    // // find index of smallest,largest

    // for (int i = 0; i < size; i++) {
    //     if (arr[i] < smallest) {
    //         smallest=arr[i];
    //         min_index = i;  // Update smallest if current element is smaller
    //     }
    //     if (arr[i] > largest) {
    //         largest=arr[i];
    //         max_index =i;  // Update largest if current element is larger
    //     }
    // }
    // cout << "Smallest element: " << min_index << endl;
    // cout << "Largest element: " << max_index << endl;

    // int lineararr[] = {10, 23, 19, 6, 14, 7};
    // int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    // int key;

    // cout << "Enter the element to search: ";
    // cin >> key;

    // // Perform linear search
    // int result = linearSearch(lineararr, n, key);

    // // Output the result
    // if (result != -1) {
    //     cout << "Element found at index: " << result << endl;
    // } else {
    //     cout << "Element not found in the array." << endl;
    // }
    // reverseArray(lineararr);

    // for (int i = 0; i < 6; i++) {
    //     cout << lineararr[i] << ' ';
    // }


    int arr[]={1,2,3,4,5};
    // Mazximum subarray 
    for (int i = 0; i < 5; i++)
    {
       for (int j = i; j < 5; j++)
       {
        for(int k=i;k<=j;k++){
            cout<<arr[k]<<" ";
        }
       }
       cout<<endl;
    }
    
    return 0;
}
