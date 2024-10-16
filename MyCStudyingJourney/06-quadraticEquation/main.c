#include <stdio.h>
#include <stdlib.h>
//06-quadrationEquation

/*
Người dùng nhập vào 3 số lần lượt là a b c
Là hệ số của phương trình ax^2 + bx + c = 0
Tìm nghiệm của phương trình là bao nhiêu

a^2 => a*a => pow(a, 2)
căn 2 của a => sqrt(a)
căn 5 của a => pow(a, (float)1/5)
*/
int main()
{
    //Xin người dùng a b c
    float a, b, c, d, x1, x2;
    printf ("Nhap a: ");
    scanf ("%f", &a);

    printf ("Nhap b: ");
    scanf ("%f", &b);

    printf ("Nhap c: ");
    scanf ("%f", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf ("Vo so nghiem");
            } else {
                printf ("Vo nghiem");
            }
        } else {
            printf ("x1 = x2 = %f", -c / b);
        }
    } else { //ax^2 + bx + c = 0
        //Tính delta
        d = pow(b, 2) - 4*a*c;
        //Xét delta > < = 0
        if (d > 0) {
            x1 = ((-1)*b + sqrt(d)) / (2*a);
            x2 = ((-1)*b - sqrt(d)) / (2*a);
            printf ("x1 = %d, x2 = %f", x1, x2);
        } else if (d == 0) {
            x1 = ((-1)*b) / (2*a);
            printf ("x1 = x2 = %f", x1);
        } else {
            printf ("Vo nghiem");
        }
    }
    return 0;
}
