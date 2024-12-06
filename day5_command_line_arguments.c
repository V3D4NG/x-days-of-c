/*Problem Statement: Write a program to print all command-line arguments.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc represents the number of arguments (including program name)
    // argv is an array of strings containing the arguments
    printf("Number of arguments: %d\n", argc);
    printf("Command-line arguments:\n");

    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
