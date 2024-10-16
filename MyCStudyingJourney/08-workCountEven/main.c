#include <stdio.h>
#include <stdlib.h>
/*
Tạo project 08-workEvenCount
In ra màn hình các số chẵn trong đoạn
Tính tổng các số lẽ trong đoạn
Đếm xem có bao nhiêu số trong đoạn
Đếm xem có bao nhiêu số chẳn trong đoạn
*/
int main()
{
    int start, end, eNumbers = 0, sum = 0, Numbers;

    printf ("Nhap start: ");
    scanf ("%d", &start);

    printf ("Nhap end: ");
    scanf ("%d", &end);

    if (start > end) { //nhập cà chớn thì swap
        int tmp = start;
        start = end;
        end = tmp;
    }

    //in ra các số chẵn trong đoạn
    //Tính tổng các số lẻ trong đoạn
    for (int i = start; i <= end; i++) {
        if (i % 2 ==0) {
            printf ("%d ", i);
            eNumbers++;
        } else {
            sum += i;

        }
        Numbers++; // Đếm số trong đoạn
    }
    //Đếm xem có bao nhiêu số trong đoạn
    int countEven = 0;
    for (int i = start; i <= end; i++) {
        countEven += 1;
    }
    printf ("Sum of oddNumbers: %d", sum);
    return 0;
}
