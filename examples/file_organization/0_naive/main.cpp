/* naive implementation:
   ---------------------
   include function directly in main
   fine for small, simple programs
   but quickly become unmanageable for large projects
   compile with g++ main.cpp
*/

#include <iostream>

void adder(int a, int b){
    std::cout<<a+b<<"\n";
}

int main(){
    
    adder(1,2);

    return 0;
}