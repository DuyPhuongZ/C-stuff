#include <stdio.h>
#include <stdlib.h>
//comment: ghi chu
/*
cntt: xu ly thong tin bang cong nghe
Luu tru -> tinh toan -> bao cao (report)
Luu tru
datatype: kieu du lieu

Ky tu char     (character) 1byte VD: 'a', '1', 'diep' -> 'p'
So nguyen int  (integer)   4byte 9, 1999, 17.9 -> 17
So thuc float  (float)     4byte 9, 1999, 17.9 -> 17.9
So thuc double (Long float)8byte 1212312312313, 12312312312312313,

C: ngon ngu huong thu tuc / tuan tu
    procedure: thu tuc sequence: dong chay
*/
//dau nhac he args
int main()
{
    //luu tru
    //luu tru ky tu dau tien trong ten cua minh
    // 1. Xac dinh kieu du lieu: char
    // 2. Xac dinh ten cho bien: dat ten co nghia
    //      cammelCase: quy tac con lac da
    //      Khong ky tu dac biet (tru $ _ )
    //      So khong nam o dau
    //      Ten phai la danh tu
    //      = phep gan: 'assignment'
    // tao cai bien de hung
    char firstCharOfName = 'd';
    //luu tuoi cua minh
    int age = 18;
    //luu diem toan
    float point = 7.2;
    double score = 9.8;
    // in ra man hinh
    // printf: print format: in theo dinh dang, in theo chuan
    printf ("Anh Diep dep trai");
    // in ra ky tu dau tien trong ten cua em
    printf ("\nKy tu dau tien la %c", firstCharOfName);
    // in ra tuoi cua em
    printf ("\nTuoi cua em la %i", age);//%i: integer
    printf ("\nTuoi cua em la %d", age);//%d: decimal
    //in ra diem di: gia tri cua point
    printf ("\nDiem la %.1f", point);//%f: float
    //in ra diem di: gia tri cua double
    printf ("\nDiem la %.1lf", score);//%lf: long float
    //in ra dia chi bien a
    printf ("\nDia chi a la %u", &age);//%u: unsign int
    //ngoai le
    int number = 'A';
    char ch = 66;
    printf ("\n%d", number);
    printf ("\n%c", ch);
    //nho hoc ascii

    //tu duy lap trinh
    //tinh tong | thuong cua 2 bien so nguyen
    int numb1 = 10;
    int numb2 = 3;
    float result = (float)numb1 / numb2;//ep kieu
    printf ("\n10 + 3 = 13"); //hard code
    printf ("\n%d / %d = %f", numb1, numb2, result);
    //swap: hoan vi
    //Hoan vi gia tri ben trong cua hai bien so nguyen
    int number1 = 15;
    int sting = 10;
    //c1:
    //int tmp = sting;
    //sting = number1;
    //number1 = tmp;
    //c2:
    sting = sting + number1;//sting = 10 + 15 = 25
    number1 = sting  - number1;//number1 = 25 - 15 = 10
    sting = sting - number1;//sting = 25 - 10 = 15
    printf("\nNumber1 = %d, sting = %d", number1, sting);

    return 0;
}
//return 0; tra 0 ra cho Windows
//Windows nhan duoc 0 thi biet chuong trinh ket thuc
//Null la biet kieu nhung chua biet cu the gia tri
//void la khong co gi
