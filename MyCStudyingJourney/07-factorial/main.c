#include <stdio.h>
#include <stdlib.h>
//07-factorial
int factorial(int number);
int main()
{
    int n, result;
    printf ("Insert n: ");
    scanf ("%d", &n);
    result = factorial(n);
    printf ("\nResult: %d", result);
    return 0;
}
int factorial(int number) {
    int sum = 1;
    for (int i = 1; i <= number; i++) {
        sum *= i;
    }
    return sum;
}
