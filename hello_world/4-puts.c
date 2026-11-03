#include <stdio.h>

int main(void) {
    const char * value = "Programming is like building a multilingual puzzle\0";
    printf("%s\n", value);
    return 0;

}
