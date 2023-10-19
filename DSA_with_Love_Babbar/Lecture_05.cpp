#include<iostream>
using namespace std;
int main(){

    /*
    Bitwise Operators ->
       AND, OR, NOT, XOR etc.
       & ,  |,   ~,   ^
 These are all will work on Bit level

       AND(&) ->
          for ex : a = 2, b = 3; a & b = 2 -> 10 & 11 : 10 == 2 like that
          output in the case of AND it will give 1 if both bits are 1 otherwise return 0.


       OR(|) ->
          It will give 1 if in both of the one is 1 other wise 0
          10 | 100 : 110 = 6 like that

       NOT(~) ->
           It will convert 0 in 1 and 1 in 0.
           for ex : ~0 = 1 , ~1 = 0 like that
           If we want to print something which is -ve in Bit wise manner then we need to take 2's complement
           for ex : a = 2;  -> ~2 = ?
           we know that an interger is 32 bits 
           00000000.....10 -> ~ krne pr : 11111111111....01 so LMSB is 1 that means this is a -ve number
           to know negative number we need to find the 2's complement of this
           so 2's complement = 1's complement + 1 
           1's complement : 0000000....10 + 1 = 000000.....011 == 3.


      XOR(^) -> 
          If both inputs are same then it will give 0 means no output
          but if one is 1 then it will return 1   
          for ex : a = 2 : 010 and b = 4 : 100 so if we want a ^ b = ?
          then 010 ^ 100 == 110 == 5 like that we can find this

             
    */

    /*  
        Bitwise Operators ::

         LEFT SHIFT OPERATOR(<<) ->
                      for ex 5 << 1 : means 5 ko 1 bar left shift kr do means
                      0000....0101 << 1 => 000000....01010 => 10
                      ex: 3 << 2 => 000....0011 --> 0000....1100 => 12
                      left shift is multiplying with 2 but not for the big number only for the small number
                      for 5 << 1 -> 5*2 = 10 : and for the 3 << 2 = 3*2*2 = 12.

         RIGHT SHIFT OPERATOR(>>) ->
                      For ex. 5 >> 2 = 0000....00101 ==> 0000...0001 = 1
                      so basically right shift means division by 2 for ex : 5/2 = 2 : 2/2 = 1 because 2 baar right shift krna tha
                      but not for the every value

         Note :: Whenever we will do right shift or left shift of a +ve number padding will always start from 0.(padding with 0)                          
                 but for the -ve number padding is depend on Compiler
                      
                                    
     */

     
   //   int a = 4;
   //   int b = 6;

   //   cout << "a & b = " << (a & b) << endl;
   //   cout << "a | b = " << (a | b) << endl;
   //   cout << "~ a = " << (~a) << endl;
   //   cout << "a ^ b = " << (a ^ b) << endl;

   // cout << (17>>1) << endl;
   // cout << (17>>2) << endl;
   // cout << (19<<1) << endl;
   // cout << (21<<2) << endl;



   // For Loop


   // int n ;
   // cout << "Enter the value of n\n";
   // cin >> n;
   // for(int i = 0; i < n; i++){
   //    cout << i + 1 << endl;
   // }

   // With multiple condintions, initialization and updation

   // for(int i = 0, j = 0; i < 5 && j < 4; i++, j++){ // here we need to initialize both i,j=0 will not work
   //    cout << i << " " << j << endl;
   // }


     // find the sum from 1 to n

   //   cout << "Please Enter the value of n\n ";
   //   int n;
   //   cin >> n;
   //   int sum = 0;
   //   for(int i = 0; i < n; i++){
   //      sum += (i+1);
   //   }
   //   cout << "Sum is = " << sum << endl;


   // Print the Fibonacci series  

   //   int n = 10;
   //   int a = 0;
   //   int b = 1;
   //   cout << a << " " << b << " ";
   //   for(int i = 2; i <= n; i++){
   //    int c = a + b;
   //    a = b;
   //    b = c;
   //    cout << c << " ";
   //   }


   // Find the number is Prime or not

   // int n = 8;// we will start from the i = 2 because 7 will also divide with 1 and 7 as well.
   // int flag = 0;
   // for(int i = 2; i < n; i++){
   //    if(n % i == 0){
   //       cout << "Not Prime"<< endl;
   //       flag = 1;
   //       break;
   //    }
   // }
   // if(flag){
      
   // } else{
   //    cout << "Prime" << endl;
  // }


  // continue

//   for(int i = 0; i < 5; i++){
//       if(i == 2){
//          continue;// skip loop for the left remaining things and go for the next value of the i
//       }
//       cout << i << " ";
//   }

  
//   for(int i = 0; i < 5; i++){
//    cout << "Hi"<< endl;
//    continue;
//    cout << "Response to kr de "<<endl;
//   }
 

    // Variables and their Scope :: Scope means we are talking about life time of a varaible and impact of that variable.


//     int a = 3;
//     cout << a << endl;

//     if(true){
//     // and scope of this a is only for this block but for the first a it can me used anywhere in the main
//       int a = 5;// both a have different scope that's why they are working differently
//       cout<< a << endl;
//     }
//       cout << a << endl;
//   // and we can't create two variables with same name in the same scope
//   // means for the same scope we can't create int b, int b two times
// int i = 0;
// for(int i = 0; i < 5; i++){// both i have different scope means there is no problem with it
//   cout << i << endl;
// }
// Operator Precedence -> There is no need to learn table for the precedence we just use the brackets for the precedence


  

  // Question -> No of one Bits

   uint32_t n = 001101;// unsigned
   int count = 0;
   while(n != 0){
    if(n & 1){
      count++;
    }
    n = n >> 1;
   }
   cout << count << endl;

    return 0;
}