#include <stdio.h>

int main()
{
    float var = 14.92f;

    float *ptr = &var;

    printf("%f", *ptr);

    return 0;
}