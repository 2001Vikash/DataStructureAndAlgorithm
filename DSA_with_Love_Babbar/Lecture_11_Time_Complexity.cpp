#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Time Complexity and Space Complexity

/*

Time complexity -> It is the amount of time taken by an algorithm to run 
                   as a function of length of the input.

Why ? -> For making better Programs, Comparison of algorithms

Representation of TC -> 
                         Big O notation    Theta 0 notation       Omega notation
                           Upper bound       for avg case           lower bound
                                                complexity


Constant time -> O(1), Linear time -> O(n), Logarithmic time -> O(log n).
Quadratic time -> O(n^2) , Cubic time -> O(n^3) etc.

                 In Increasing order time complexity
                     ---->
 O(1) < O(log n) < O(n) < O(n*log n) < O(n^2) < O(n^3) < O(2^n) < O(n!).          

For ex. ->
          f(n) = 2n^2 + 3n => O(n^2) 
          f(n) = (n + 4) / 4 => O(n)  ... like that            

      Try to find out the complexity of Printing array

   -->    We know that loop runs from 0 to n that means in the worst case complexity will O(n).

   Note -> If two loops are nested the complexity will be multiply to each other
           but both loops are not nested then complexity will be add. and so on


--> Stuck in TLE that is Time Limit Exceeded
    
  Imp Note ->  10^8 Operation Rule -> Most of the modern machine can perform 10^8 Operation / second

  If constraints given like that 1 < n < 10^6 then we need to apply TC max to max O(n*log n)
                                 if am trying to for O(n^2) then it will give TLE due to
                                 crossed 10^8 Operation rule if we want to solve in 1 second.
      if max is limit 10^8 then we can only apply O(n) or O(log n) complexity likes algo.
      for ex. if we have range like <= 10...11 then we can apply O(n!) like that and so on.                          


*/

/*

Space Complexity --> 

                    memory taken by an algorithm to run a program or to execute it.
                    like variable size of array , vector etc.

*/