# Functions

The function includes two parts the declaration and definition.
Declaration includes the functions name, return type, and parameters (if any).
Definition includes the body of the function.
Parameters (sometimes called formal parameters) must all be used and must be in order.
Function have default values, but these can only be determined by definition.
Default values are only included in the functions declaration and not its definition.
Can overload functions (i.e., reuse the same name with different behavior) given different type or number of arguments.
You redeclare and redefine the function accordingly c++ will determine which is the proper implementation.
But there is a better way -> templates!
Templates are entirely included in the header file (unlike other functions).
Templates slow down compile time but speed up execution time.
Use `template <typename T>` above your function to define template type `T`.
Then use `T` to define your types (like how you would normally).
