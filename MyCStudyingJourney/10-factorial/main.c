#include <stdio.h>
#include <stdlib.h>
//10-factorial

/*
Nhập số nguyên n
Tính n!
vd: nhập n = 5
Tính 5! = 120
120 là kết quả của 5! = 5*4*3*2*1 => 1*2*3*4*5
*/
int main()
{
    int n, sum = 1;
    printf ("Insert n: ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum *= i;
    }
    printf ("Sum: %d", sum);
    return 0;
}
