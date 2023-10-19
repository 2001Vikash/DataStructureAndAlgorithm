#include<iostream>
using namespace std;
int main(){

    // Decimals and Binary
     
    // Decimal to Binary conversion
    // for ex : 2 -> 10 or 5 -> 101.

//    int n = 10;
//    int ans = 0;
//    int p = 1;

   // First Approach

//    while(n != 0){
//     ans = ans  + (n % 2) * p;
//     n = n / 2;
//     p = p * 10;
//    }
//    cout << ans << endl;
 
//  // Second Approach
//   n = 10;
//   ans = 0;
//   p = 1;
//   while(n != 0){
//      int bit = n & 1;// because of if n is even it will give 0 and for odd give 1.
//      ans = ans + bit * p;// for reversing
//      n = n >> 1; // for ignoring last bit
//      p = p * 10; // for increasing power in 10 or as well we can use pow(10,i);
//   }
//   cout << ans << endl;

// ans << endl;
// for the -ve nubmers we need to try.
  

  // Binary to Decimal conversion

  int n = 111;
  int ans = 0;
  int pow = 1;
  while(n != 0){
   // int bit = n & 1;// here it will not work we need to find digit here
   int digit = n % 10;
    if(digit == 1){
      ans = ans + pow;
    }
    pow = pow * 2;
    n = n / 10;
  }
  cout << ans << endl;
    return 0;
}