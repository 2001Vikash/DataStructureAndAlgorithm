#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Question 01 -> Book Allocation Problem.

// to know about question please refer websites.
// we have given an (Books)array of integers which consists no. of pages at ith pos
// and distribut the books for all the students which are m students.
// with these three conditions->
          // each student get atleast one book.
          // each book should be allocated to a student.
          // book allocation should be an contiguous manner.

// you have to allocate the books to m students such that the maximum number of pages assigned
 // to a student is minimum.

 /*bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
 }          
 int main(){
    int arr[] = {10,20,30,40};
    int n = 4;// no. of books and 10,20...are no. of pages.
    int m = 2;// no. of students jo n se big nhi hoga.
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    // Apply Binary search from 1 to sum that is our search space
    // 1 because it is our minimum value of arr[i].
    int s = 1;
    int e = sum;
    int ans = -1;// because if ans not found then return -1.
    while(s <= e){
        int mid = s + (e - s) / 2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }else{
            // means solution not possible
            s = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
 }*/



 
// Question 02 -> Painter's Partition Problem.
// for the question explaination go through on the websites
// exactly same as book allocation problem




// Question 03 -> Agressive Caws Problem
  
//   class Solution {
// public:
     
//      bool isPossible(vector<int> &stalls, int k, int m){
//          int cow = 1;
//          int lastPos = stalls[0];
//          for(int i = 0; i < stalls.size(); i++){
//              if(stalls[i] - lastPos >= m){
//                  cow++;
//                  if(cow == k){
//                      return true;
//                  }
//                  lastPos = stalls[i];
//              }
//          }
//          return false;
//      }

//     int solve(int n, int k, vector<int> &stalls) {
    
//         // Write your code here
//         sort(stalls.begin(), stalls.end());
//         int e = stalls[n-1];
//         int s = 0;
//         int ans = -1;
//         while(s <= e){
//             int m = s + (e - s) / 2;
//             if(isPossible(stalls, k, m)){
//                 ans = m;
//                 s = m + 1;
//             }else{
//                 e = m - 1;
//             }
//         }
//         return ans;
//     }
// };

