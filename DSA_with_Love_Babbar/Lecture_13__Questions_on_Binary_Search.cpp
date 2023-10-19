#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Question 01 -> First and last position of an element in sorted array.

// Brute force -> we can traverse array from starting and end and find.

/*
int firstOccurence(int arr[], int key, int n){
    int s = 0;
    int e = n-1;
    int ind = -1;
    while(s <= e){
        int m = s + (e - s) / 2;
        if(arr[m] == key){
           ind = m;
           e = m - 1;
        }
        else if(key > arr[m]){
            s = m + 1;
        } else{
            e = m - 1;
        }
    }

    return ind;
}

int lastOccurence(int arr[], int key, int n){
    int ind = -1;
    int s = 0;
    int e = n-1;
    while(s <= e){
        int m = s + (e - s) / 2;
        if(arr[m] == key){
            ind = m;
            s = m + 1;
        }
        else if(key < arr[m]){
            e = m - 1;
        }else{
            s = m + 1;
        }
    }
    return ind;
}
int main(){
    int arr[] = {0,5,5,6,6,6};
    int ele = 5;
    // if element is not present then return -1.
    cout << "First occurence = " << firstOccurence(arr, 6, 6) << endl;
    cout << "Last occurence = " << lastOccurence(arr, 6, 6) << endl;

    return 0;

//    pair<int, int> p;
   // p.first = firstInd;
   // p.second = lastInd;
    //retrun p; 
}  */




//  Application of this question is to find the total no. of occurence of an element in the array
// firstly we can go for lenearly and count but here array is sorted and we need to search 
// means we can apply Binary search here 
// so total occurence = (lastOccurence - firstOccurence) + 1.



// Question 02 -> Find the Peak element in the mountain array

// we can go lenearly and find max that will take n time com. but
// here we need to understand that some part of the array is sorted in increasing order
// and some in decreasing order and we need to search something here so we need to apply 
// Binary search here.

/*
int peakIndex(int arr[], int n){
   int s = 0;
   int e = n-1;
   while(s < e){
      int m = s + (e - s) / 2;
      if(arr[m] < arr[m+1]){
        s = m + 1;
      }else{
        e = m;
        // why mid not mid - 1 
        // because if we want to find peak element then we do s = m + 1 means in left part
        // but what if element is in right part or mid is our ans in that case if we do
        // mid - 1 then we can come in left part and our ans can be not found.
      }
   }
   return s;// or e.
}

// same thing but some little bit different intution

int getPeak(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s < e){// and remove =
        int m = s + (e - s) / 2;
        if(m > 0 && m < n && arr[m] > arr[m-1] && arr[m] > arr[m+1]){
            return m;
        }
        if(m < n && arr[m] < arr[m+1]){
            s = m + 1;
        }else {
           // e = m - 1;// it's not working for only decreasing array.
           e = m;
        }
    }
    return s;
}

int main(){
    int arr[] = {6,5,4,3,2,1};
    int arr2[] = {1,2,3,4,5,4,3,2};
    cout << "Peak element lies on index = " << peakIndex(arr, 6) << endl;
    cout << "Peak element lies on index = " << getPeak(arr, 6) << endl;
    return 0;
} */


// Find Pivot element in the array -> pivot element is an element if we add all elements from 
// the left and add all elements from the right then both sum will be same,
// this is not like that the rotated sorted array pivot this is different from that.

int pivot(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int left = 0;
    int right = sum;
    int piv = -1;
    for(int i = 0; i < n; i++){
        right -= arr[i];
        if(left == right){
           piv = i;
           break;
        }
        left += arr[i];
    }
    return piv;
}
int main(){
    int arr[] = {0,-1, 1};
    cout << "Pivot element is present at index : " << pivot(arr, 3) << endl;
    return 0;
}

