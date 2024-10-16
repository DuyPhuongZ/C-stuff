#include <stdio.h>
#include <stdlib.h>
//03-evenOdd
/*Xin người dùng nhập từ bàn phím một số nguyên bất kỳ
Kiểm tra coi số đó là chẵn hay lẻ
in ra màn hình báo cáo
*/
int main()
{
    int number;
    printf ("\nplz, input a number: ");
    scanf ("%d", &number);
    //code đến được đây là number đã có giá trị
    //Kiểm tra coi giá trị của number là chẵn hay lẻ
    // Nếu số chia hết cho 2 được 0 là chẵn còn lại là lẻ
    if (number % 2 == 0) {
        printf ("\n%d is even number", number);
    } else {
        printf ("\n%d is odd number", number);
    }
    return 0;
}
