#include <stdio.h>
typedef enum colors
{
    black,
    blue,
    red,
    green,
    white = 0,
    yellow
}colors_t;

int main()
{
    colors_t value;
    value = yellow;
    printf("yellow = %d", value);//1 will be assigned to yellow and 1 will be printed
}
