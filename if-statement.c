
#include <stdio.h>

int main()
{

    float age;
    printf("enter your age:");
    scanf("%f", &age);
    if (age >= 16.5 && age <= 19.5)
    {

        printf("congratulations, you're eligible for NDA");
    }

    return 0;
}