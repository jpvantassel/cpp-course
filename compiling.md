# Compiling

Include header files `#include "name.h"`.
Compile other .cpp files `g++ main.cpp name.cpp`.
Place declarations in header files.
Place implementation in .cpp files.
You can inline short functions by adding the `inline` keyword.

Why using #include and multiple cpp files:

1. Speeds up compile time. Can take several minutes to recompile large programs.
2. Keeps code organized. Easier to find what you are looking for.
3. Seperation of _interface_ and _implementaiton_. Seperates what a thing does from how it does it.

Compiling runs as follows:

- Compiler compiles all source code files into what are called object files.
- The compiler then links all of these compiles files into a single executable.

This means each source file is ignorant of what is going on in anther
source file.
To resolve this ignorance we use header files.
We place the _interface_ (i.e., the declaration) in the header file.
Then include that header file `#include "name.h"` (this copy-and-pastes that file into the current file).

File extensions
header files end in .h* (e.g., .h, .hpp, .hxx)
C++ source files end in .c* (e.g., .cpp, .cxx, .cc)
C source files end in .c (and only .c)
Header files should always be included never compiled.
Source file should always be compiled and never included.

Include guards
c++ compiles do exactly what you tell them, if you include a file multiple times they will and this will cause double declaration problems.
Some people say to never include in a header file (ignore this).
Instead only include what you need.
Use header guards to prevent double includes.
Example:

```cpp
#ifndef MYFILE_H
#define MYFILE_H
//... put guarded includes here ...
#endif
```

To avoids headaches related to circular dependencies (and I assume other issues).

1. Avoid includes and forward declarations whenever possible.
2. If you cannot avoid both, use forward declare.
3. If you cannot avoid only doing a forward declaration, use an include statement.

## Sources

[Headers and Includes: Why and How](https://www.cplusplus.com/articles/Gw6AC542/)
[SO: Including #includes in header file vs source file](https://stackoverflow.com/questions/2596449/including-includes-in-header-file-vs-source-file)
