# lib_divisorsPN

![](https://github.com/Leumim2020/lib_divisorsPN/blob/main/image/lg.png)

The library positive and negative generates divisors the of an integer.
Input: 2
Output: -1, -2, 1, 2

# HOW USE

1- first step include the file "lib_Divisors.h"

    #include "lib_divisoresPN/hDivPN/lib_Divisors.h"
     using namespace dvPN;
    
**You can use the functions through two forms:**

 First form: 
 
 ###### using namespace name;
 
 Second form: Operator of scope locator 
 
 ###### std::name_function; 
    
2- Second step functions for use:

###### nDivisors_PN(int value); //return divisors positive and negative

###### nDivisorsN(int value,int value2); //return divisors negatives

 **Note: The variable int value2 is an array and must to be initialized with value null or '0' or diferent of 0 and must to have a size.**
       
  Else it goes return this error:  
  
        ____________________________________________
         ** stack smashing detected  : terminated  **                      
          Aborted (core dumped)   
        --------------------------------------------
  **Warning: the array it goes receive the divisors that will be used**
  
 ###### nDivisorsP(int value, int value2); // return divisors positves

       
      



