#include <stdio.h>
#include <stdlib.h>
//07-forLoop: vòng lặp for
int main()
{
    /*for(Khởi đầu; điều kiện thoát; bước nhảy) {
        command block;
    }*/

    for(int i = 1; i <= 3; i++) {
        printf ("\n%d Nguyen The Hoang", i);
    }//blockScope: tầm nhìn của khối
    return 0;
}
