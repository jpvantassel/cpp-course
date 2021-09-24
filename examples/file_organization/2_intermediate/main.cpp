/* intermediate implementation:
   ----------------------------
   keep function implementation in a separate file (adder.cpp)
   move function declaration to header file (adder.h)
   this approach is more scalable because we do not need to repeat the declaration, just the include.
   compile with g++ main.cpp adder.cpp
*/

#include "adder.h"

int main(){
    
    adder(1,2);

    return 0;
}