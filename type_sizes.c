#include <stdio.h>
#include <limits.h>
#include <float.h>


int main()
{
    printf("The value of CHAR_MAX is  %i\n", CHAR_MAX);
    printf("The value of CHAR_MIN is %i\n", CHAR_MIN);
    printf("An int takes  %lu bytes\n", sizeof(int));

    printf("The value of FLT_MAX is %f\n", FLT_MAX);
    printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
    printf("A float takes the %lu bytes\n", sizeof(float));

    return 0;
}
