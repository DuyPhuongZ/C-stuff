#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;

    printf ("Nhap a: ");
    scanf ("%d", &a);

    printf ("Nhap b: ");
    scanf ("%d", &b);

    printf ("Nhap c: ");
    scanf ("%d", &c);

    //N?u code ch?y xu?ng dây thì a b c dã có giá tr?
    //Ki?m tra a b c có t?o thành tam giác không

    if (a + b > c && b + c > a && a + c > b) {
        if (a == b || b == c || a == c) {
            if (a == b && b == c) {
                printf ("Tam giac deu");
            } else if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) {
                printf ("Tam giac vuong can");
            } else {
                printf ("Tam giac can");
            }
        } else if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) {
            printf ("Tam giac vuong");
        } else {
            printf ("Tam giac thuong");
        }
    } else {
        printf ("\nKhong la tam giac");
    }
	return 0;
}
