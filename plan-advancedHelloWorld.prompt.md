## Plan: Advanced Hello World Description

TL;DR - Replace `01_HelloWorld.cpp` with a fully commented, advanced C++ Hello World program that documents every language component, runtime behavior, and compile/runtime contract.

**Steps**
1. Read the existing `01_HelloWorld.cpp` and preserve the Hello World behavior.
2. Replace the file contents with a version that includes:
   - file-level header comment describing purpose and compilation/execution flow
   - `#include <iostream>` and explanation of header inclusion
   - `int main()` with notes on function signature, return type, and entry point semantics
   - use of `std::cout`, `<<`, and `std::endl` with detailed commentary on namespaces, streams, and flushing
   - a second output line with descriptive text to show multiple statements
   - `return 0;` and explanation of program exit codes
3. Add comments for every component: preprocessor, function, braces, statements, operators, literals, and return value.
4. Keep the file self-contained and compilable with `g++` or `gcc`.

**Relevant file**
- `/home/matin/Desktop/cpp101/01_HelloWorld.cpp`

**Verification**
1. Compile with `g++ 01_HelloWorld.cpp -o 01_HelloWorld`
2. Run `./01_HelloWorld` and verify output
3. Review comments for completeness

**Decisions**
- Scope is limited to a single self-explanatory `01_HelloWorld.cpp` example.
- No additional documentation files are required unless the user asks for them.
