#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MALE 0
#define FEMALE 1

//구조체 포인터에 구조체 변수 주소 할당

struct Person {
    char name[20];
    int age;
    char gender;
    char major[20];
} ;

int main() {
    struct Person* p1 = (Person*)malloc(sizeof(struct Person));

    strcpy(p1->name, "김철수");
    p1->age = 27;
    p1-> gender = MALE;
    strcpy(p1->major, "전자공학");
    
    printf("이름: %s\n", p1->name);
    printf("나이: %d\n", p1->age);
    printf("성별: %s\n", (p1->gender==0) ? "남" : "여");
    printf("전공: %s\n", p1->major);

    strcpy(p1->name, "나영희");
    p1->age = 23;
    p1-> gender = FEMALE;
    strcpy(p1->major, "경영학과");
    
    printf("이름: %s\n", p1->name);
    printf("나이: %d\n", p1->age);
    printf("성별: %s\n", (p1->gender==0) ? "남" : "여");
    printf("전공: %s\n", p1->major);
    
    free(p1);
    
    return 0;
} 