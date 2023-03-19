// ABC081A - Placing Marbles
#include <stdio.h>
int main()
{
    char a[4];
    scanf("%s", &a);

    printf("%d", a[0] + a[1] + a[2] - '0' - '0' - '0');
    return 0;
}