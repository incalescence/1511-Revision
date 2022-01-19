// gnirts a esreveR (Reverse a string)

#include <stdio.h>

void string_reverse(char *buffer);
int string_length(char *string);
void string_copy(char *destination, char *source, int destination_size);

int main(int argc, char *argv[]) {

    // NOTE: THIS WON'T WORK:
    // char *str = "Hello!"
    // string_reverse(str)
    //
    // str only points to a string literal, which it is not legal to change.
    // If you attempt to modify it on Linux you will get a runtime error.
    // Instead, you need to create an array to store the string in, e.g.:
    //
    // char str[] = "Hello!"
    // string_reverse(str)

    char str[] = ".'neetneves' :egassem terces A";
    string_reverse(str);
    printf("%s\n", str);
    return 0;
}

// Takes a string in `buffer`, and reverses it in-place.
void string_reverse(char *buffer) {
    int len = string_length(buffer);
    char temp[len+1];
    string_copy(temp,buffer,len+1);

    int i = 0;
    while (i < len) {
        buffer[i] = temp[len-i-1];
        i++;
    }
    
}

// Takes a string and finds its length, excluding the null-terminator.
int string_length(char *string) {
    int length = 0;
    int i = 0;
    while (string[i] != '\0') {
        length++;
        i++;
    }
    return length;
}

    // Takes a string in `source`, and copies it to `destination`, which
// is `destSize` elements in size; only copies up to `destSize` bytes.
// Ensures the `destination` array is null-terminated.
void string_copy(char *destination, char *source, int destination_size) {
    int i = 0;
    while (i < destination_size-1) {
        destination[i] = source[i];
        i++;
    }
    if (i == destination_size-1){
        destination[destination_size-1] = '\0';
    }
}
