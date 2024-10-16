#include <stdio.h>
#include <stdlib.h>
//06-inductiveResult
int main()
{
    int n, sum = 0;
    printf ("Insert n: ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += pow(i, n);
    }
    printf ("\nResult: %d", sum);
    return 0;
}
