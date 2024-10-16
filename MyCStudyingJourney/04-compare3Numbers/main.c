 #include <stdio.h>
#include <stdlib.h>
//04-compare3Numbers
/*
    Nhập từ bàn phhims 3 số nguyên
    Lần lượt là a, b, c
    Nhiệm vụ: xuất ra màn hình tên biến có giá trị lớn nhất
    Mô tả phần mềm:
    Nhập a: 20
    Nhập b: 20
    Nhập c: 20
    A B C bang nhau
    A lớn nhất (a > b && a > c)
    A và B lớn nhất (a == b && a > c)
    A và C lớn nhất (a == c && a > b)

    B lớn nhất (a < b && b > c)
    B và C lớn nhất (b == c && a < b)
    C lớn nhất (a < c && b < c)

    A B C bang nhau (a == b && b == c)
*/
int main()
{
    if ((a > b) && (a > c)) {
        printf ("A lon nhat");
    } else if ((a == b) && (a > c)) {
        printf ("A va B lon nhat");
    } else if ((a == c) && (a > c)) {
        printf ("A va C lon nhat");
    } else if ((a < b) && (b > c)) {
        printf ("B lon nhat");
    } else if ((b == c) && (a < b)) {
        printf ("B va C lon nhat");
    } else if ((a < c) && (b < c)) {
        printf ("C lon nhat");
    } else if ((a == b) || (b == c)) {
        printf ("A B C la lon nhat");
    }
    return 0;
}

/*
    Nhập vào số nguyên lần lượt là a, b, c
    Gỉa sử đó là 3 cạnh, kiểm tra coi
    3 cạnh có tạo thành tam giác không
    Nếu có là tam giác gì
    Cân, vuông, đều, vuông cân, thường
*/
