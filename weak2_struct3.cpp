#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MALE 0
#define FEMALE 1

//구조체 포인터 사용

struct Person {
    char name[20];
    int age;
    char gender;
    char major[20];
} ;

int main() {
    struct Person p1;
    struct Person *ptr;
    ptr = &p1;

    strcpy(ptr->name, "김철수");
    ptr->age = 27;
    ptr-> gender = MALE;
    strcpy(ptr->major, "전자공학");
    
    printf("이름: %s\n", ptr->name);
    printf("나이: %d\n", ptr->age);
    printf("성별: %s\n", (ptr->gender==0) ? "남" : "여");
    printf("전공: %s\n", ptr->major);

    strcpy(ptr->name, "나영희");
    ptr->age = 23;
    ptr-> gender = FEMALE;
    strcpy(ptr->major, "경영학과");
    
    printf("이름: %s\n", ptr->name);
    printf("나이: %d\n", ptr->age);
    printf("성별: %s\n", (ptr->gender==0) ? "남" : "여");
    printf("전공: %s\n", ptr->major);
    
    free(ptr);
    
    return 0;
} 