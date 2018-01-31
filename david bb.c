#include <stdio.h>
int main()
{
    int n;

    printf("Enter an i: ");
    scanf("%d", &n);

    // True if the n is perfectly divisible by 2
    if(n % 2 == 0)
        printf("%d is even.", n);
    else
        printf("%d is odd.", n);

    return 0;
}
