/*
프로그램 내용 : 포인터를 이용하여 두 변수를 변환하는 프로그램
실습일 : 2023.05.08
실습자 : 박현규
학번 : 202111678
*/

#include <stdio.h>

void swap(int* px, int* py)
{
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

int main()
{
    int x = 3;
    int y = 5;
    printf("x : %d\ny : %d\n", x, y);
    swap(&x, &y);
    printf("swap() 호출 후\n");
    printf("x : %d\ny : %d\n", x, y);
}
