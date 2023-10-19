#include<iostream>
using namespace std;

// int power(int a, int b){
//     int ans = 1;
//     for(int i = 1; i <= b; i++){
//         ans = ans * a;
//     }
//     return ans;
// }

// int main(){
    
    // Switch cases or Statements

// int num = 3;
// char ch = 's';
// cout << endl;
// switch(num) {
//     // after case on that position integer and character only can come
//     // float and string is not allowed of the constant place
//     case 1 : cout << "First" << endl;
//               break;

//     case 2 : cout << "Second" << endl;
//               break;

//     case 3 : switch(ch){
//              case 's' : cout << "Nested switch cases" << endl;
//              break;
//     }    
//              break;      

//     default : cout << "This is default" << endl;                    
// }   

// if we want come out of from the infinite loop without using break 
 // if switch statement also used in the loop then what we use to come out
 // of the loop so ans is exit().


//  int n = 1;
//  while(1){
//     switch (n)
//     {
//     case 1 : cout << "Hello Ji Kaise Ho aap log" << endl;
//             exit(2);// this argument is only for the showing true
//             // break;
               
//     default:  cout << "This is default case"<< endl;
//              break;
//     }
//    // break;
   
//  }

// Note** -> use of continue in case of switch is not valid....

// cout << "Please enter the value of a and b"<< endl;
// int a,b;
// cin >> a >> b;

// cout << "Please enter the Operators" << endl;
// char op;
// cin >> op;

// switch(op){ // op can be an expression
//     case '+': {cout << "Sum of a and b is = " << a + b;}// we use bracket as well
//               break;
//     case '-': cout << "Subtraction of a and b is = " << a - b;
//               break;
//     case '*': cout << "Multiplication of a and b is = " << a * b;
//               break;
//     case '/': cout << "Division of a and b is = " << a / b;
//               break;
//     case '%': cout << "Remainder or Modulo of a and b is = " << a % b;
//               break;
//     default : cout << "Error ! please enter the values again"<< endl;                                                  
// }
   

  
//   int money = 1873;
  
//   switch(1){
//     case 1 :  
//              cout << "No. of 100 notes = " << money / 100 << endl;
//              money = money % 100;
             
//     case 2 : 
//              cout << "No. of 50 notes = " << money / 50 << endl;
//              money = money % 50;

//     case 3 : 
//              cout << "No. of 20 notes = " << money / 20 << endl;
//              money = money % 20;

//     case 4 :     
//              cout << "No. of 1 notes = " << money / 1 << endl; 
//              money = money % 1;                 
//   } 



// FUNCTIONS .... 

// If we want to some works again and again
// then we need to use function and it is well define task.

//     int a, b;
//     cin >> a >> b;
//     cout << a << " to the power "<< b << " is = " << power(a,b) << endl;
//     return 0;
// }
// we can't make here we need to make above from the main function



// Make a function to check that a given number is even or odd

// bool check(int n){
//     if(n % 2 == 0){ // a & 1 is also gives true if number is odd
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     cout << " Please enter the value of number "<< endl;

//     int num;
//     cin >> num;
//     if(check(num)){
//         cout << "Number is Even " << endl;
//     }else{
//         cout << " Odd number " << endl;
//     }
//     return 0;
// }


// Write a function who find the nCr .

// int fact(int a){
//     int f = 1;
//     for(int i = 1; i <= a; i++){
//         f *= i;
//     }
//     return f;
// }
// int main(){
//     cout << "Please enter the value of n and r " << endl;

//     int n, r;
//     cin >> n >> r;
//     int nCr = (fact(n) / (fact(r) * fact(n-r)));

//     cout << nCr << endl;
//     return 0;
// }



//  Print counting

// function signature
// void print(int n){
//     for(int i = 1; i <= n; i++){
//         cout << i << " ";
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     // function call
//     print(n);
//     return 0;
// }

// Make a function to check that the number is prime or not

// bool isPrime(int n){
//     for(int i = 2; i < n; i++){
//         if(n % i == 0){
//             return false; // or 0
//         }
//     }
//     return true; // or 1
// }

// int main(){
//     int n ;
//     cin >> n;

//     if(isPrime(n)){
//         cout << "Number is Prime " << endl;
//     }else{
//         cout << "Number is not Prime " << endl;
//     }
//     return 0;
// }


// find the total no. of set bits in a and b. means no. of 1's in binary representation of a number


// int findSetBit(int n){
//     int setBit = 0;
//     while(n != 0){
//        if(n & 1){
//          setBit++;
//        }
//        n = n >> 1;// right shift means dividing by 2
//     }
//     return setBit;
// }
// int main(){
//  int a,b;
//  cin >> a >> b;

// int ans = findSetBit(a) + findSetBit(b);
// cout << "Total set Bits is = " << ans << endl;
//  return 0;
// }



// Pass by value --->

void dummy(int n){// here n is pass by value
// here n ki ek copy hai na ki oringinal n.

// means in pass value we can't change original things whichever in the main.

    n++;
    cout <<"N is "<< n << endl;
    
}
int main(){
    int n;
    cin >>n;
    dummy(n);
    cout << "N is in main function " << n << endl;
    return 0;
}