#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a > 30 && a < 70)
        printf("\"Confusing weather.\"");
    if (a >= 70)
        printf("Bad weather.");
    if (a <=30)
        printf("Good weather.");
    return 0;
}