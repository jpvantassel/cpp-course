/* intermediate+ implementation:
   ----------------------------
   keep function implementation in a separate file (adder.cpp)
   keep function declaration in header file (adder.h)
   move header to include directory and code files to src.
   this follows typical c++ style
   compile with g++ src/* -I ./include/
*/

#include "adder.h"

int main(){
    
    adder(1,2);

    return 0;
}