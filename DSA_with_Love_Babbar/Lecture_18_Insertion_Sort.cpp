#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Insertion Sort -> It is basically a sorting algorithm in which we make an array that have
                    // sorted part and try to shift element if they are not in sorted order.
                    // and after every round left half of the array is sorted.

int main(){
    int arr[6] = {6,5,7,3,2,1};
    // for(int i = 0; i < 6-1; i++){
    //     for(int j = i + 1; j > 0; j--){
    //         if(arr[j-1] > arr[j]){
    //             swap(arr[j-1], arr[j]);
    //         }
    //     }
    // }

    // But in Insertion Sort there is no need to swapping here we are only doing shifting

    // Why? -> This algorithm is very adaptable means it sorting the data time to time means
    //         when we have a work like we have not idea about our elements then for that 
    //         time we can use it because as data will be came it will sort them means there is
   //          no any need of data previously we can take data continuously and sort them.
   // And second thing about it that is It's also a Stable Sorting algorithm.
   // as well it will work for the small data not for the big data. and
   // if array is partially sorted then it will perform more better.

   // Space Complexity - > O(1).

   // Time Complexity -> O(n^2) in Worst case and O(n) in best case if array is already sorted. only (n-1) comparisons

   // for worst case if array is sorted in non-increasing order or sorted in decreasing order.  

    for(int i = 1; i <= 6; i++){
        int temp = arr[i];
        int j;
        for(j = i - 1; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}