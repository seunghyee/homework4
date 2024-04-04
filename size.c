#include<stdio.h>
#include<stdlib.h>

void main() {
    printf("[----[son seunghye] [2023078010]---]\n");
    int **x; // 이중 포인터 x 선언
    printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x));    // x가 가리키는 주소에 저장된 값(포인터)의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x));    // x가 가리키는 주소에 저장된 값의 값(정수)의 크기 출력

}
