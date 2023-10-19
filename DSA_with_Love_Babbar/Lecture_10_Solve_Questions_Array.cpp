#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// Question 01 -> Swap alternate

// int main(){
//     int arr[6] = {1,2,7,8,6};
//     for(int i = 0; i < 6 - 1; i += 2){
//         swap(arr[i], arr[i+1]);
//     }
//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// Question 02 -> Find Unique number in the array

//int main(){
    // Brute force

    // int arr[5] = {1,3,4,1,3};
    // for(int i = 0; i < 5; i++){
    //     int count = 0;
    //     for(int j = 0; j < 5; j++){
    //         if(arr[j] == arr[i]){
    //             count++;
    //         }
    //     }
    //     if(count == 1){
    //         cout << arr[i] << endl;
    //         break;
    //     }
    // }

    // Optimized solution.

    // XOR(^) -> a ^ a = 0 and 0 ^ a = a
//     int ans = arr[0];
//     for(int i = 1; i < 5; i++){
//         ans = ans ^ arr[i];
//     }
//     cout << ans << endl;
//     return 0;
// }


// Question 03 -> Unique number of occurence of elements in the array

// ex. {1,2,2,1,1,3}. Brute force -> we can iterate and check for every element.


// using Map we can solve it in Linear time but space is also required when I learn map.


// Question 04 -> Find duplicates in Array

//int main(){
    // very optimal solution otherwise counting sort is also nice it's more optimal

// we find out the xor with 1 to n-1 elements so here we can find our ans because that will occur
// three time means it will not cancle and remaining thing will be 0 due to 2 times xor.
    // int ans = 0;
    // int arr[5] = {4,2,1,3,1};
    // for(int i = 0; i < 5; i++){
    //     ans = ans ^ arr[i];
    // }
    // for(int i = 1; i < 5; i++){
    //     ans = ans ^ i;
    // }
    // cout << ans << endl;

    // for practice
    // in the case of xor if both input are same then it will give 0.

//  cout << (1 ^ 0) << " " << (0 ^ 1) << " " << (1 ^ 1) << " " << (0 ^ 0) << endl;
//  cout << (2 ^ 6 ^ 2) << endl;

//     return 0;
// }



// Question 05 -> find all duplicates in the array and element in the array lies in the range of 1 to n.
                  // for this question we need to make a list and add all those numbers which is repeated.


  // Question 06 -> Intersection of the two arrays which is in sorted order

 /* int main(){
    // Brute force can be iterate both arrays and find common things so TC - O(m*n)
    int arr1[6] = {1,2,2,2,3,4};
    int arr2[4] = {2,2,3,3};
    // ans like 2,2,3
    // if there is no any common number in beetween then print -1.

    int i = 0;
    int j = 0;
    cout << "Intersection of two arrays is : " << "{";
    while(i < 6 && j < 4){
        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        if(arr1[i] > arr2[j]){
            j++;
        }else if(arr1[i] < arr2[j]){
            i++;
        } 
    }
    cout << "}" << " ";
    return 0;
  }       */


  // Question 07 -> Pair Sum 

 /* int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = 5;// find the pairs which sum is = s.
    // Brute force solution is pick one element and iterate for another
    // for(int i = 0; i < 5; i++){
    //     for(int j = i + 1; j < 5; j++){
    //         if(arr[i] + arr[j] == s){
    //             cout << arr[i] << " " << arr[j] << endl;
    //         }
    //     }
    // }

    // Optimal approach but when array is sorted

    int s = 0;
    int e = 5-1;
    while(s < e){
        if(arr[s] + arr[e] == sum){
            cout << arr[s] << " " << arr[e] << endl; 
            s++;
            e--;
        }
        if(arr[s] + arr[e] > sum){
            e--;
        }else if(arr[s] + arr[e] < s){
            s++;
        }
    }
    return 0;
  }         */


  // Question 08 -> Trplet with given sum.

  // using Brute Force approach we can solve it using three Loops

//   int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     int sum = 12;
    // Brute force
    // for(int i = 0; i < 7; i++){
    //     for(int j = i + 1; j < 7; j++){
    //         for(int k = j + 1; k < 7; k++){
    //             if(arr[i] + arr[j] + arr[k] == sum){
    //                 cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
    //             }
    //         }
    //     }
    // }


//     return 0;
//   }

// Another approach for this question
// which will take O(n^2) time complexity.
// firstly we need to sort this array.

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
   // std :: sort(begin(arr), end(arr));// we can use this as well or
   int sum = 12;
   sort(begin(arr), end(arr));

    for(int i = 0; i < 7-2; i++){
        int s = i + 1;
        int e = 7 - 1;
         
         while(s < e){
            if(arr[i] + arr[s] + arr[e] == sum){
                cout << arr[i] << " " << arr[s] << " " << arr[e] << endl;
                break;
            }else if(arr[i] + arr[s] + arr[e] < sum){
                s++;
            }else{
                e--;
            }
         }
    }
    return 0;
}



// Question 09 -> Sort 0 1 2

// firstly we need solve it for 0 1 sort
//int main(){
    // int arr[6] = {1,1,1,0,0,0};
    // int s = 0;
    // int e = 6-1;

    // while(s < e){
    //     if(arr[s] == 1 && arr[e] == 0){
    //         swap(arr[s], arr[e]);
    //         s++;
    //         e--;
    //     } 
    //      if(arr[s] == 0){
    //         s++;
    //     }
    //      if(arr[e] == 1){
    //         e--;
    //     }

    // Or it can be also like that

    //  while(s < e){

    //     while(s < 6 && arr[s] == 0){
    //        s++;
    //     }
    //     while(e >= 0 && arr[e] == 1){
    //         e--;
    //     }
    //     if((s < e) && arr[s] == 1 && arr[e] == 0){
    //         swap(arr[s], arr[e]);
    //         s++;
    //         e--;
    //     } 
    //  }
    // for(int i = 0; i < 6; i++){
    //     cout << arr[i] << " ";
    // }
    

    // 


//     return 0;
// }

// Same concept will apply for 0 1 2 

// int main(){
    // Brute force is using sorting algo.
//     int arr[9] = {0,2,2,1,0,1,1,0,2};
//     // firstly we can count 0,1 and 2 and again in next raversal we can put it as it is.
//     // But we need to solve it in only one pass means only in one traversal.
//     int c0 = 0;
//     int c1 = 0, c2 = 0;
//     for(int i = 0; i < 9; i++){
//         if(arr[i] == 0){
//             c0++;
//         }else if(arr[i] == 1){
//             c1++;
//         }else{
//             c2++;
//         }
//     }
//     int k = 0;
//     while(c0 > 0 && k < 9){
//         arr[k++] = 0;
//         c0--;
//     }
    
//     while(c1 > 0 && k < 9){
//         arr[k++] = 1;
//         c1--;
//     }
    
//     while(c2 > 0 && k < 9){
//         arr[k++] = 2;
//         c2--;
//     }
//     for(int i = 0; i < 9; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// } 

// But it's done two pass we need to solve it in only pass

// So Actually this problem is a variation of Dutch national flag algorithm.

// In this algorithm there will three pointers low, high, and mid.
// so we put low and mid pointer at the start and high pointer at the last position of the arr
// so this is based on this fact that is all the numbers from 0...low-1 are 0's and
// all the numbers from high + 1.....n are 2's.
// and stop when mid pointer crossed the high pointer and during this we need to three check
// when mid is 0 and 1 and 2.
// so when ever we find the mid pointer is at 0 then we swapped that value with low pointer's value
// at the same after doing swapping we move low++, mid++.
// when ever mid pointer is pointing to the 1 we simply do mid++;
// in next step if we find that mid pointer pointing to the 2 then swap with high and high--;
// on that time mid pointer at will be at same point

// int main(){
//     int arr[9] = {0,2,2,1,0,1,1,0,2};
//     int low = 0;
//     int mid = 0;
//     int high = 9-1;
//     while(mid <= high){
//         switch(arr[mid]){
//             case 0 :
//                     swap(arr[low++], arr[mid++]);
//                     break;
//             case 1 :
//                     mid++;
//                     break;
//             case 2 :
//                     swap(arr[mid], arr[high--]);
//                     break;
//         }
//     }
//     // we can also use if elese as well
//      for(int i = 0; i < 9; i++){
//         cout << arr[i] << " ";
//      }

//     return 0;
// }




