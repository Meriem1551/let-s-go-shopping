#include "main.h"

float getFloat(char *s)
{
    float input;
    puts(s);
    scanf("%f", &input); // Use "%99[^\n]" to read a whole line, excluding newline

    return input;
}