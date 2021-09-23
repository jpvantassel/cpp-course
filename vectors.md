# Vectors

## std::vector

`std::vector` lives in the `vector` header from the standard library so `#include <vector>`.
Declare with `std::vector<type> name`.
Declare and to specific size with `std::vector<type> name(size)`.
Declare and initialize with `std::vector<type> name = {x, y}`.
Can grow vectors dynamically with `name.push_back(data)`.
Can shrink vectors dynamically with `name.pop_back()` (beware has no return value).
Find size of array with `name.size()`.
