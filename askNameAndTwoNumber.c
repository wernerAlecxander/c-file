#include <stdio.h>
#include <string.h>

float myFunction(float x, float y)
{
    return x + y;
}

int main()
{
    float z;
    float a;
    char nameFull[30];
    printf("enter a nameFull: \n");
    fgets(nameFull, sizeof(nameFull), stdin);
    printf("enter a first number: \n");
    scanf("%f,", &a);
    printf("enter a second number: \n");
    scanf("%f,", &z);
    printf("Result is: %.4f\n", myFunction(z, a));
    printf("your name is: %s\n", nameFull);
    return 0;
}
// gcc askNameAndTwoNumber.c -o askNameAndTwoNumber.exe