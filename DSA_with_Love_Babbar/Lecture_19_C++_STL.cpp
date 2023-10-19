#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// STL -> Standard Library Function that is implemented in c++ already 
//        which are very helpful for using we can use all those with the
 //       including their related Library.


#include<array>


// 01 -> array -> It's also stl in c++. which is made by simple array
                // like int[3] = {1,2,3} like that .
                // It is a static array that's why there is no any use in daily basis. 
                // for using aaray functionalitites we need to include array in our code.
/*
int main(){
    int arr[3] = {1,2,4};
    // this is stl array
    array<int,4> a = {1,2,3,4};// initializing array
    
    // Some properties of this data structure.

    int size = a.size();
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }

    cout << endl << "Element at 2nd index = " << a.at(2) << endl;
    cout << "Array is Empty or not : " << a.empty() << endl;

    cout << "First element of the array is = " << a.front() << endl;
    cout << "Last element of the array is = " << a.back() << endl;
    return 0;
} */



// 02 -> vector --> to use this we need to import a library that is

#include<vector>

// Vector -> It is a dynamic type data structure means 
    //       when it will full it will change(make double size) his size autometically.
    //       we can use it like as simple array.
    // initialization ..
  int main(){
    vector<int> v;// if we are talking about size then it will 0 untill we do push any int value

    // we can check capacity as like what is memory it will occupy
    // so ans is zero in initial stage.
     cout << v.capacity() << endl;
     v.push_back(4);
     cout << "Capacity : " << v.capacity() << endl;

      v.push_back(5);
     cout << "Capacity : " << v.capacity() << endl;

      v.push_back(5);
     cout << "Capacity : " << v.capacity() << endl;

// so it will change it's capacity dynamically if we have 3 elements then can be take capacity as 4.
// main thing we need to understand that is capacity will be changed dynamically.

    cout << "Size : " << v.size() << endl;// it will show that how many elements are there.
// there are some operations which we can perform with the help of vector.
    cout << v.at(2) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v[2] << endl;

    cout << "Before Pop means remove " << endl;
    for(int i : v){
        cout << i << " ";
    }

    v.pop_back();

   cout << endl << "After Poping means removal from the back " << endl;
    for(int i : v){
        cout << i << " ";
    }

    cout << "Befor clear Size : " << v.size() << endl << "Capacity : " << v.capacity() << endl; 
    v.clear();
   cout << "After clear Size : " << v.size() << endl << "Capacity : " << v.capacity() << endl; 

   // Imp Note -> After performing clear operation on vector size will be zero 
   //              but not capacity, capacity will remain same as befor performing clear.


   // Another way of initialization ..

   vector<int> v1(5);// here we specified it capacity or size we can say as 5.
   v1.push_back(4);
   v1.push_back(4);
   v1.push_back(4);
   v1.push_back(4);
   v1.push_back(4);
   v1.push_back(4);
   v1.push_back(4);// when we exceed sizw which I specified at initial stage then it will change dynamically like if in initial 5 if we exceed 1 then it will be 6+5 = 11 like that.

   vector<int> v2(5, 1);// means initialize with 1 all elements.
   // By default it will have 0 all entries same like as array in Java.
   cout << v1.size() << endl << v1.capacity() << endl;

// if we want to copy all elements from a vectore and copy in another vector then do like this
 vector<int> vec(v);
   return 0; 
  }