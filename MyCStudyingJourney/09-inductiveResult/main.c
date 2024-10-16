#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//09-inductiveResult
/*
Nhập vào 1 số nguyên n
Xuất ra màn hình kết quả của
1^n + 2^n + 3^n + ... + n^n

vd: ta nhập n = 5
Thì phải in ra kết quả của 1^5 + 2^5 + 3^5 + 4^5 + 5^5

*/
int main()
{
    int n, sum;
    printf ("Insert n: ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += pow(i, n);
    }
    printf ("Sum = %d", sum);
    return 0;
}
