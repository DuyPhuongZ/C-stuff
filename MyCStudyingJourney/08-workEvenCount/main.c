#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end, tmp, sum = 0, numbers = 0, eNumbers = 0;

    printf ("Nhap start: ");
    scanf ("%d", &start);

    printf ("Nhap end: ");
    scanf ("%d", &end);

    if (start > end) {
        tmp = start;
        start = end;
        end = tmp;
    }

    printf ("Even numbers: ");

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf ("%d ", i);
            eNumbers++;
        } else {
            sum += i;
        }
        numbers++;
    }
    printf ("\nSum of odd numbers is %d", sum);
    printf ("\n%d numbers in range", numbers);
    printf ("\n%d Even numbers in range", eNumbers);
    return 0;
}
