#include <stdio.h>

// 구조체 정의: student1
struct student1 {
    char lastName;  
    int studentId;  
    char grade;     
};

// 구조체 정의: student2 (typedef를 통해 구조체 별칭으로 정의함)
typedef struct {
    char lastName;  
    int studentId;  
    char grade;     
} student2;

int main() {
    // student1 타입의 변수 st1 선언과 초기화
    struct student1 st1 = {'A', 100, 'A'};
    
    printf("[----[son seunghye] [2023078010]---]\n");

    // st1의 각 멤버 출력
    printf("st1.lastName = %c\n", st1.lastName);  // 성 출력
    printf("st1.studentId = %d\n", st1.studentId);  // 학번 출력
    printf("st1.grade = %c\n", st1.grade);  // 학점 출력

    // student2 타입의 변수 st2 선언과 초기화
    student2 st2 = {'B', 200, 'B'};
    
    // st2의 각 멤버 출력
    printf("\nst2.lastName = %c\n", st2.lastName);  // 성 출력
    printf("st2.studentId = %d\n", st2.studentId);  // 학번 출력
    printf("st2.grade = %c\n", st2.grade);  // 학점 출력

    // student2 타입의 변수 st3 선언
    student2 st3;

    // st2의 값으로 st3 초기화
    st3 = st2;
    
    // st3의 각 멤버 출력
    printf("\nst3.lastName = %c\n", st3.lastName);  // 성 출력
    printf("st3.studentId = %d\n", st3.studentId);  // 학번 출력
    printf("st3.grade = %c\n", st3.grade);  // 학점 출력

    // equality test: st3와 st2의 멤버별로 비교하여 동등성 판단
    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) /* 멤버별로 비교해야함 */
        printf("equal\n");
    else
        printf("not equal\n");

    return 0;
}
