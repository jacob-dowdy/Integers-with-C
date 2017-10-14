#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    printf("Give me a number: ");
    int i = get_int();
    printf("Hello, %i\n", i);
}
