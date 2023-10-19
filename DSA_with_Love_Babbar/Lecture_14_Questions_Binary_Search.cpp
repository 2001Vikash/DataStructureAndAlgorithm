#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Question 01 -> find a Pivot element -> Here in this question we have an rotated sorted array.
                //         So a pivot element is a smallest element in the array

 int main(){
    int arr[12] = {6,1,1,1,1,2,2,2,3,4};
    int s = 0;
    int e = 12 - 1;
    while(s < e){
        int m = s + (e - s) / 2;
        if(arr[m] >= arr[0]){
            s = m + 1;
        }else{
            e = m;
        }
    }
    cout << s << endl;// or e.
    return 0;
 }        



// Question 02 -> Search in rotated sorted array.

// so basicaly try to find pivot first and then after try to check that where target lies
// the after apply binary search

/*int BS(int arr[], int s, int e, int tar){
    while(s <= e){
        int m = s + (e - s) / 2;
        if(arr[m] == tar){
           return m;
        }
        if(tar > arr[m]){
            s = m + 1;
        }else{
            e = m - 1;
        }
    }
    return -1;
}
int main(){
    int arr[5] = {7,9,1,2,3};
    int s = 0;
    int e = 5-1;
    // find pivot
    while(s < e){
       int m = s + (e - s) / 2;
       if(arr[m] >= arr[0]){
         s = m + 1;
       }else{
         e = m;
       }
    }
    int pivot = s;
    int target = 2;
    int ind = -1;
    if(target >= arr[pivot] && target <= arr[5-1]){
       ind = BS(arr, pivot, 5-1, target);
    }else{
        ind = BS(arr, 0, pivot - 1, target);
    }

    cout << "Element is at index " << ind << endl;
    return 0;
}*/


// Note -> Second approach for this question and third approach as well means jo java me kiya tha wo wala.



// Question 03 -> Find a square root using Binary Search

// Firstly try for the integers parts

// int BS(int n){

//     if(n == 0)return 0;

//     int s = 1;
//     int e = n;
//     while(s <= e){
//         int m = s + (e - s) / 2;
//         if(m * m == n){
//             // here we are trying to find out the m * m if m is near about 2^31 then it will 
//             // give run time error that's we need to make as long
//             return m;
//         }
//         if(m * m < n){
//             s = m + 1;
//         }else{
//             e = m - 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n = 81;
//     if(BS(n) == -1){
//         cout << "Not a perfect square" << endl;
//     }else{
//         cout << BS(n) << endl;
//     }
//     return 0;
// }



// Same question but with fraction part as well if someone is not a perfect square.

// int squareRootInt(int n){
//     int ans = -1;
//     int s = 0;
//     int e = n;
//     while(s <= e){
//         int m = s + (e - s) / 2;
//         if(m * m == n){
//             return m;
//         }
//         if(m * m < n){
//             ans = m;
//             s = m + 1;
//         }else{
//             e = m - 1;
//         }
//     }
//     return ans;
// }
// double morePrecision(int intPart, int n, int precisionCount){
//      double factor = 1;
//      double ans = intPart;
//      for(int i = 0; i < precisionCount; i++){
//         factor = factor / 10;// to make 0.1, 0.01....
//         for(double j = ans; j * j < n; j += factor){
//             ans = j;
//         }
//      }
//      return ans;
// }
// int main(){

//     int n = 3;
//     int intPart = squareRootInt(n);
//    cout << "Answer is = " << morePrecision(intPart, n, 3);
//     return 0;
// }