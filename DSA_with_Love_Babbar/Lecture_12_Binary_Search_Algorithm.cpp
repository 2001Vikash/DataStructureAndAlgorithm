#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Binary Search -> It is only aplicable for the sorted array.

// means element should be in montonic function

int main(){
    int arr[5] = {3,5,9,13,27};
    int s = 0, e = 5-1;
    int key = 27;
    int ind = -1;
    while(s <= e){
        int m = s + (e - s) / 2;
        if(arr[m] == key){
           ind = m;
           break;
        }
        if(arr[m] < key){
            s = m + 1;
        }else{
            e = m - 1;
        }
    }
    if(ind == -1){
        cout << "Element is not found in the Array " << endl;
    }else{
        cout <<"Element is found at index = " << ind << endl;
    }
    
    // Binary search is more better than the linear search 
    // for if we 1000 value then we need to take 1001 comparisons 
    // but in case of binary search we can solve it only in 10 comparisons in worst case.
    // for ex -> 1000 -> 500 -> 250 .... and so on.
    //Time complexity of Binary Search is O(log n) in the worst case in best case it is O(1)
    // if mid element is out answer.
}