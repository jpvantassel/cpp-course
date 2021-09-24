# Pointers

All data in a computer is stored in bytes in memory.
Memory is an important and limited resource.
References and pointers allow programmers to directly manipulate memory.
A reference variable is a variable that represents another variable
(i.e., both point to the same piece of memory).
Create an alias by this `int &<alias> = <variable>`.
Any changes to the reference affects the original.
Aliases cannot be changed to alias something else.
Pass-by-value: requires copy does not allow for changes.
Pass-by-reference: does not copy and does allow for changes.
Can also have const reference using `int const &variable` to let the compiler we know we wil not change `variable`.
However, `&` can also be used to find the memory address of a variable.
At declaration `&` it is a reference operator
Not at declaration `&` it is an address operator.
Pointers are the old syntax (avoid them as much as possible).
References use pointers (but are generally much easier to use).
Declare a pointer to variable with `int* prt = &variable` syntax.
Use the `*` to dereference a pointer (i.e., look at the value its pointing at).
At declarationn `*`, creates a pointer.
Not at declaration `*`, dereferences a pointer (look at its values).
When declare a pointer `int *ptr;` it points to some random location in memory that is full of junk, this is not good.
So instead we always point these to the `nullptr` as `int* ptr = nullptr;`.
`nullptr` used to be `NULL`.
