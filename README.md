# demostringtion

`strcat(string 1, string 2)` and `strncat(string 1, string 2, number)` are C functions located in the string library, use the `#include <string.h>` header, that append a *copy* of the 2nd argument string to the first argument string assuming the first argument has enough memory to store the append and both are null-terminating strings. A terminating 0 is added to the end of the array.

The difference between `strcat()` and `strncat()` is that `strcat()` appends the entirety of the second argument after the first argument while `strncat()` appends the integer third argument's number of characters from string 2 to string 1.
