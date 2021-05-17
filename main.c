#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, rest;

    printf("Type a value: ");
    scanf("%i", &n);

    rest = n % 2;

    printf("%s", (n%2==0)?"Even":"Odd");
    return 0;
}
