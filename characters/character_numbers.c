// prints out integers and their corresponding ascii value 

#include <stdio.h>
# define MIN 32
# define MAX 126

int main(void) {
    int i;
    for (i = MIN; i <= MAX; i++) {
        printf("%d 0x%x %c\n", i,i,i);
    }
    return 0;
}