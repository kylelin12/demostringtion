#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[20] = "Foo"; // String to be appended to
    char *add = ", Bar"; // String to append
    char number_demo[] = "12345678"; // Part of string to append demo
    
    printf("string before strcat: \"%s\"\n", string); // "Foo"
    printf("address of string: %p\n\n", string);

    strcat(string, add);
    printf("string after strcat:  \"%s\"\n", string); // "Foo, Bar"
    printf("address of string: %p\n\n", string);

    strncat(string, number_demo, 4); // strcat first 4 chars of number_demo
    printf("string after strncat: \"%s\"\n", string); // "Foo, Bar1234"
    printf("address of string: %p\n\n", string);
}