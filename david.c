#include <stdio.h>
int main()
{
    double na;

    printf("Enter a number: ");
    scanf("%lf", &na);

    if (na <= 0.0)
    {
        if (na == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;
}
