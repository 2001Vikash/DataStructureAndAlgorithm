#include<iostream>
using namespace std;
//int main(){
    // Arrays -> It is a data structure where we can store same type of data items means same 
    //            type of data types not for multiple things
    //            Elements are presrnt continuously in the memory
    //            or we can say in another words at a perticular index. 

    // Declaration of array

    // int arr[5] = {1,2,3,4,5}; // here arr shows first location of the array means index 0.

    // int a[5] = {0}; // means at every position have only one element that is 0.
    // means initializing with 0 at every index.
    // cout << a[1] << endl;

    // int arr[5] = {3};// means 3 at 0 index and another element will be 0.

// Taking input 

    // int arr[10];
    // for(int i = 0; i < 10; i++){
    //     cin >> arr[i];
    // }
    // for(int i = 0; i < 10; i++){
    //     cout << arr[i] << " ";
    // }

//     return 0;
// }


// Array with functions

/*void printArray(int arr[] , int size){
    // here we are passing array that is an object 
    // means here we are passing not value 
    // here we are using pass by reference means we can change things in the array in function
    // and it will also reflect in the main function as well.
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[5] = {1,2,3,5,6};
    // find the length of the array
    int size = sizeof(arr) / sizeof(int);// it will give how much memory taken by that array
    // not exact no of elements for ex. if we array of 10 size and put only 4 elements 
    // so we need to ans as 4 but it will give us 10 that is memory size.
    cout << size << endl;
    printArray(arr, 5);
    return 0; 
}*/

//int main(){

    // find min , max element in the array

    // we don't need to give the variable size in the array 
    // Always try to give some fix value for that rather than it's so big.
//    int arr[100];
//    int size;
//    cout << "Please enter the value of size under 100 " << endl;
//     cin >> size;
//     cout << "Please enter the value of array elements " << endl;

//    for(int i = 0; i < size; i++){
//      cin >> arr[i];
//    }
 
//  int min = INT32_MAX;
//  int max = INT32_MIN;
//  for(int i = 0; i < size; i++){
//     if(arr[i] < min){
//         min = arr[i];
//     }
//     if(arr[i] > max){
//         max = arr[i];
//     }
//  }

//  cout << "Minimum element in the array is = " << min << endl;
//  cout << "Maximum element in the array is = " << max << endl;

//     return 0;
// }

// instead of using of conditionals we can also use min, max predefind/inbuilt functions


// Scoping

// void update(int arr[], int n){
//     cout << "Inside the funtion " << endl;
//     arr[0] = 120; // it will change every where because here is working pass by reference.
//      // Printing of the array
//     for(int i = 0; i < 3; ++i){
//         cout << arr[i] << " ";
//     }

//     cout << endl <<  "Going back ti main " << endl;
// }
// int main(){
//     int arr[3] = {1,2,3};
//     update(arr, 3);// we are passing first element address here that is arr. 
// // Printing of the array
//     for(int i = 0; i < 3; ++i){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


 // To find out that given number is in power of 2 or not
 // so solve this question if no. of set bit is 1 then it will other wise not.
 // for ex. 1000 = 8 like that.


 // Linear search

 bool search(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
 }
 void reverse(int arr[] , int n){
    // for(int i = 0; i < n / 2; i++){
    //     int temp = arr[i];
    //         arr[i] = arr[n-1-i]; 
    //         arr[n-1-i] = temp;
    // } 

    // or 

    int st = 0;
    int en = n - 1;
    while(st <= en){
        // int temp = arr[st];
        // arr[st] = arr[en];
        // arr[en] = temp;

        //  or
        swap(arr[st], arr[en]);// for swapping inbuild function

        st++;
        en--;
    }
 }
 int main(){
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    // find out the 1 is present in it or not.
//    if(search(arr, 10, 1)){
//      cout << "Yes" << endl;
//    }else{
//     cout << "No" << endl;
//    }

// Reverse the array

 reverse(arr, 10);
 for(int i = 0; i < 10; i++){
    cout << arr[i] << " ";
 }

    return 0;
 }