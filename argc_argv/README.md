This directory contains code that demonstrates the use of the argc and argv variables.

What are argc and argv?
The argc variable is a global integer that stores the number of command-line arguments passed to the program. The argv variable is a global array of strings that stores the command-line arguments, starting with the first argument.

How to use argc and argv
To use argc and argv, you can use the following code:

c
int main(int argc, char *argv[]) {
// Print the number of command-line arguments.
printf("There are %d command-line arguments.\n", argc);

// Print the command-line arguments.
for (int i = 0; i < argc; i++) {
printf("argv[%d] = %s\n", i, argv[i]);
}

return 0;
}

This code will print the number of command-line arguments, as well as the individual command-line arguments.

