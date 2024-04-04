#include <stdio.h>

// 구조체 정의: student
struct student {
    char lastName[13];  // 성을 저장하는 배열. 13바이트를 차지
    int studentId;      // 학번을 저장하는 변수
    short grade;        // 학점을 저장하는 변수
};

// main 함수 시작
int main() {
    // 구조체 변수 pst 선언
    struct student pst;

    printf("[----[son seunghye] [2023078010]---]\n");

    // student 구조체의 크기 출력
    printf("size of student = %ld\n", sizeof(struct student));

    // int 타입의 크기 출력
    printf("size of int = %ld\n", sizeof(int));

    // short 타입의 크기 출력
    printf("size of short = %ld\n", sizeof(short));

    // main 함수 종료
    return 0;
}
