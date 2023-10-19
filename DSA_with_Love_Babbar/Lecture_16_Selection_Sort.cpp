#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Selection Sort -> In this in every pass we take an index that shows the smallest element put 
                     // it in the first.


// Complexities --> space complexity -> O(1) that is constant.

// Time complexity -> (n-1) comp. + (n-2) comp. + ..... + 1 comp. = O(n^2)

// Best case Complecity -> O(n^2) and in Worst case that is also O(n^2) when array is sorted in reverse order


// Use case -> If given size is small then we can use it over there.

// Selection sort is not a Stable sorting algorithm because it swaps non-adjacent element.



int main(){
    int arr[5] = {64,25,12,22,11};
    for(int i = 0; i < 5-1; i++){
        int minInd = i;
        for(int j = i + 1; j < 5; j++){
            if(arr[j] < arr[minInd]){
                minInd = j;
            }
        }
         swap(arr[minInd], arr[i]);
    }

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}                     