// Problem Solving

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // 1 -> Reverse Integer

//    int n = -123;// whenever we find the modulo of a -ve number then it will come -ve as well
//    // for ex. -123 % 10 = -3 and so on
//    int ans = 0;
//    while(n != 0){
//     if(ans > INT32_MAX / 10 || ans < INT32_MIN / 10){// because problem will create at the time of ans * 10 which is going to the out of range of the integer
//         ans = 0;
//           break;
//     }
//     ans = ans * 10 + n % 10;
//     n = n / 10;
//    }
//    cout << ans << endl;


// 2 -> Complement of Base 10 integer

// int n = 0;
// // in Binary = 101 and find out the complement of this which is 010 = 2.
// int m = n;
// // edge case
// if( n == 0){
//     cout << "Complement of " << n << " is = " << 1 << endl;
// }
// int mask = 0;
// while(m != 0){
// mask = (mask << 1) | 1;
// m = m >> 1;
// }
// int ans = (~n) & mask;
//cout << "Complement of " << n << " is = " << ans << endl;
// but it will give wrong ans in the case of zero(0). because that time loop will not run.


// Question -> 3 : Power of 2.

// According to the integer range it given number come in to this range then yes.

// int n = 32;
// int flag = 0;
// for(int i = 0; i <= 30; i++){
//     int ans = pow(2,i);
//     if(ans == n){
//         flag = 1;
//         break;
//     }
// }
// if(flag == 1){
//     cout << "Yes" << endl;
// }else{
//     cout << "No" << endl;
// }

// same question with efficient manner

int n = 0;
int ans = 1;// which means 2 ^ 0
int flag = 0;
for(int i = 1; i <= 30; i++){
    ans = ans * 2;
    if(ans < INT32_MIN / 2)
    if(ans == n){
      flag = 1;
        break;
    }
}
if(flag == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
return 0;
}