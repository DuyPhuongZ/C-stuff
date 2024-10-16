#include <stdio.h>
#include <stdlib.h>
//08-evenCount
/*
Nhập vào 2 số nguyên lần lượt là start và end
In ra màn hình các số trong đoạn từ start đến end
-Mô tả:
    Nhap start: -2
    Nhap end: 6
    -2 -1 0 1 2 3 4 5 6
*/
int main()
{
    int start, end, tmp;
    printf ("Nhap start: ");
    scanf ("%d", &start);
    printf ("Nhap end: ");
    scanf ("%d", &end);
    if (start > end) {
        tmp = start;
        start = end;
        end = tmp;
    }

    //Tính tổng các số trong khoảng từ start đến end
    int sum = 0;
    /*for (int i = start; i <= end; i++) {
        printf ("%d ", i);
        sum += i;
    }*/
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf ("%d ", i);
            sum += i;
        }
    }
    printf ("\nSum: %d", sum);
    return 0;
}
/*
Tạo project 08-workEvenCount
In ra màn hình các số chẵn trong đoạn
Tính tổng các số lẽ trong đoạn
Đếm xem có bao nhiêu số trong đoạn
Đếm xem có bao nhiêu số chẳn trong đoạn
*/
