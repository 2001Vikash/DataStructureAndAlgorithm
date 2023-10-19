#include<iostream>
using namespace std;

int main(){

    // Conditional Statements

 //   int n;
   // cout << "Please Enter the value of \n";
    // cin >> n;
    // if(n > 0){
    //     cout << "n is +ve" << endl;
    // }else{
    //     cout << "n is -ve" << endl;
    // }

    // cin does not read tab, enter, and space
    // if we want to take in consideration these three in our input then we need to use cin.get().

    // int a;
    // a = cin.get();// is will provide ASCII value of input character

    // cout << a << endl;
    
    //      int a, b;
//     cin >> a >> b;
//    cout << "Value if a and b is : " << a << ", " << b << endl;

    // int a, b;
    // cout << "Please Enter the value of a and b\n";
    
    // cin >> a >> b;

    // if(a > b){
    //     cout << "a is big than b"<< endl;

    // }else{
    //     cout << "b is big than a" << endl;
    // }

    // if(a > b){
    //     cout << "A is big than B\n";
    // }else if(a ==b){
    //     cout << "Both are Equal\n";
    // }else{
    //     cout << "B is big than A" << endl;
    // }

    // cout << "Please Enter the Character which do you want to check?\n";

    // char ch;
    // cin >> ch;

    // if(ch >= 'a' && ch <= 'z'){
    //     cout << "This is LowerCase Alphabet character" << endl;
    // }else if(ch >= 'A' && ch <= 'Z'){
    //     cout << "This is UpperCase Alphabet character" << endl;
    // }else if(ch >= '0' && ch <= '9'){
    //     cout << "This is a number\n";
    // }else{
    //     cout << "This is Special character" << endl;
    // }

    
    // Looping like While Loop

    //  int n;
    //  cout << "Please Enter the value of n\n";
    //  cin >> n;
    //   int i = 1;
    //   int sum = 0;
    //   while(i <= n){
    //    // cout << i << endl;
    //    sum += i;
    //     i++;
    //   }
    //   cout << sum << endl;

    // Find the sum of even numbes from 1 to n;

    //   int i = 0;
    //   int sum = 0;
    // while(i <= n){
    //     sum = sum + i;
    //     i = i + 2;
    // }
    //  cout << sum << endl;

    // Foreignheight to celcious for this just we need to remember the conversion formula

    // Given number is prime or not

    // int n;
    //  cout << "Please Enter the value of n\n";
    //  cin >> n;

    //  int i = 1;
    //  int d = 0;
    //  while(i <= n){
    //     if(n % i == 0){
    //         d++;
    //     }
    //     i++;
    //  }
    //  if(d == 2){
    //     cout << "Given number is a Prime Number\n";
    //  }else{
    //     cout << "Given number is not a Prime Number\n";
    //  }



    // Patterns printing

     int row ;
     int col ;
     cout << "Please Enter the value of row and col" << endl;
     cin >> row >> col;
    //  int i = 0;
    //  int j;
    //  while(i < row){
    //     j = 0;
    //     while(j < col){
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    //  }


      int i = 1;
      int j;
      while(i <= row){
        j = 1;
        while(j <= col){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
      }

    return 0;
}