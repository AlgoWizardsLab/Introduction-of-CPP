#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Memory :
         Memory is a crucial aspect of programming, especially in C++. 
         It refers to the storage space where data is held during the execution of a program. 
         In C++, memory management can be manual or automatic, depending on how you allocate and deallocate memory.

         There are two main types of memory allocation in C++:
         1. Stack Memory: Automatically managed by the compiler, used for static memory allocation.
         2. Heap Memory: Manually managed by the programmer, used for dynamic memory allocation.

         Dynamic memory allocation allows you to request memory at runtime using operators like `new` and `delete`. This is useful when the size of data structures cannot be determined at compile time.
    */

    // Example of dynamic memory allocation using new and delete
    int *number = new int;
    *number = 420;
    cout << "Dynamically allocated number: " << *number << endl;
    delete number; // Freeing the allocated memory
    return 0;
}