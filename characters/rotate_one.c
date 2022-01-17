// Rotate a character by one -- i.e. turn 'a' to 'b', 'b' to 'c', ...

#include <stdio.h>
#include <stdlib.h>

int rotateOne(int c);

// DO NOT CHANGE THIS MAIN FUNCTION
int main(int argc, char *argv[]) {

    // Scan in the first character.
    int c = getchar();

    // Loop until there are no more characters to scan.
    while (c != EOF) {
        // Print the character, "rotated" once.
        putchar(rotateOne(c));

        // Get the next character.
        c = getchar();
    }

    return 0;
}
// END OF MAIN FUNCTION

// "Rotate" the letter by one, i.e. change 'a' to 'b', 'b' to 'c',
// 'z' to 'a'.
int rotateOne(int c) {
    // A - Y
    if (c >= 65 && c <= 89) {
        c += 1;
    }
    // Z
    else if (c == 90) {
        c = 65;
    }
    // A - Y
    else if (c >= 97 && c <= 121) {
        c += 1;
    }
    // Z
    else if (c == 122) {
        c = 97;
    }
    return c;
}
