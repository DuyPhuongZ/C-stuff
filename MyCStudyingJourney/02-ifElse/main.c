#include <stdio.h>
#include <stdlib.h>
//02-if else
//cấu trúc phân nhánh
int main() {
    /*if(conditional 1) {
        command block; //(nếu điều kiện 1 đúng)
    } else if(conditional 2) {
        command block; //nếu điều kiện 1 sai, điều kiện 2 đúng)
        }*/
    int car = 5;
    printf ("\nSai Gon");
    printf ("\nCao toc Lien Khuong");
    //Gặp một biển báo
    if(car >= 7) {
        printf ("\nPren");
    } else if ( car == 7) {
        printf ("\nSacom");
    } else {
    printf ("\nMimosa");
    }
    printf ("\nDa Lat");
    //nói riêng về lý thuyết
    //comparision operator: toán tử điều kiện
    // == so sánh bằng
    // != so sánh khác
    // > < >= <=
    //Mathetic operator: toán tử toán học
    // + - * / %
    //toán tử tăng
    //II - logical operator: toán tử logic
    //muốn đi bar thì cần gì
    //tuổi từ 18 trở lên
    //money trên 300
    int age = 18;
    int money = 11;

    /*if (age >= 18) {
        if (money > 300) {
            printf ("\nWelcome");
        } else {
        printf ("\nCut");
        } }
    else {
        printf ("\nCut");
    } */
    if (age > 18 && money > 300) {
        printf ("\nWelcome");
    } else {
        printf ("\nCut");
    }
    //&&: and: tìm false, thấy false là chốt false
    // Không tìm được thì true
    //||: or: tìm true, thấy true chốt true
    // Không tìm được thì false
    int a = 10;
    int b = 0;
    if (a == 10 || b++ > 2) {
        printf ("\nTrue a = %d, b = %d", a, b);
    } else {
        printf ("\nFalse a = %d, b = %d", a, b);
    }
    return 0;

}
//bài tập 04, 05
//03- evenOdd
