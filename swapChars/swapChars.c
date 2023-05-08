/*
프로그램 내용 : 포인터를 이용하여 두 변수를 변환하는 프로그램
실습일 : 2023.05.08
실습자 : 박현규
학번 : 202111678
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void swapChars(char* ch1, char* ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}

int main()
{
    char abcd[10] = "abcd";
    char randabcd[10];
    strcpy(randabcd, abcd);
    srand(time(NULL));
    int i1 = rand() % 4;
    int i2 = rand() % 4;
    swapChars(&randabcd[i1], &randabcd[i2]);
    printf("문자열 %s의 가능한 하나의 조합은 다음과 같다.\n%s",abcd,randabcd);
}