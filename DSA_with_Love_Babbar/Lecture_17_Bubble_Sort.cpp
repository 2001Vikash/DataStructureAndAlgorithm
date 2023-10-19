#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Bubble Sort -> In this we compare the adjacent elements and if they are not right showcase
            //    then we simply swap both and so on.
             // so after the completion of first round we can see that the biggest element in 
             // the array pushed at its right position that is end.
             // so due to this adjacent swapping this is a Stable sorting algorithm.
             // that's why it's also know as In-Place Sorting Algorithm.

// Use case -> every ith round we put ith max element at right position in the Bubble sort.

// Time complexity -> (n-1)comp + (n-2)comp +...... + 1 = O(n^2)
// Space complexity -> O(1).

// Best case TC -> O(n). and in Worst case TC -> O(n^2).

int main(){
    int arr[6] = {10,1,7,6,14,9};
    for(int i = 0; i < 6-1; i++){
        bool swapped = false;
        for(int j = 1; j < 6-i; j++){
            if(arr[j-1] > arr[j]){
                swap(arr[j-1], arr[j]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
    cout << "Sorted array : " ;
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}             