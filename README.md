# lib_divisorsPN

The positive and negative divisors library generates the divisors of an integer.
Input: 2
Output: -1, -2, 1, 2

# HOW USE

1- first step include the file "lib_Divisors.h"

    #include "lib_Divisors.h"
    
2- Second step functions for use:

###### nDivisors_PN(int value); //return divisors positive and negative
###### nDivisorsN(int value,int value2);**//return divisors negatives

 **Note: The value2 is an array and must to be initialized with value null or '0' or diferent of 0 and must to have a size.**
       
  Else it goes return this error:  
  
        ____________________________________________
         ** stack smashing detected  : terminated  **                      
          Aborted (core dumped)   
        --------------------------------------------
  **Warning: the array go receive the divisors for be used**
  
 ###### nDivisorsP(int value, int value2);/ return divisors positves

       
      



