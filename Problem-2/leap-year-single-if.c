#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
    printf("%d is a Leap year", n);
    else
    printf("%d is not a Leap year", n);
    return 0;
}
