#include <stdio.h>
#include <stdint.h>

/* We probably need some documentation */
void main(void)
{
    uint8_t name[100];
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
    puts("END OF PROGRAM");
}
