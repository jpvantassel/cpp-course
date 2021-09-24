# Classes

When you define a class you are effectively defining your own type.
C++ was originally called "C with Classes".
The stuff inside of a class are called members
There are two types of members attributes (data-like) and methods (function-like).
You can define methods inside a class (uncommon) or you declare them in a header file,
then define them in a .cpp file. Note that you much include the header file in .cpp
file (unlike with functions) and you must prefix each method with `<Class>::`.
Declarations in header file require `;` at the end of each line.
By default everything is private, use public keyword (all below will be public)
use private keyword for more private stuff (all below with be private).
Constructors allow you declare and initialize a class simultaneously.
Define a constructor using the same name as the class (no return type).
Destructor uses the same name as the class preceded by a `~`.
