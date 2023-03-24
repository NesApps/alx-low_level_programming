#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - print name using pointer to function
* @name: string to add
* @f: pointer to function
* Return: nothing
**/


void print_with_hello(char *name) {
    printf("Hello, %s!\n", name);
}

int main() {
    char *name = "Alice";
    print_name(name, &print_with_hello); // prints "Hello, Alice!"
    return 0;
}

