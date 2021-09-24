/* naive+ implementation:
   ----------------------------
   move function implementation to a separate file
   leave only the function declaration in main.cpp
   this approach is better but again not scalable
   if we want use the adder function somewhere else we need to repeat the declaration
   if we changed adder (for example templatizing it) we would need to change every declaration
   compile with g++ main.cpp adder.cpp
*/

void adder(int a, int b);

int main(){
    
    adder(1,2);

    return 0;
}