#include <stdio.h>

int main() {
    int num = 13;
    int *ptr; //포인터
    int **dptr; //더블포인터

    ptr = &num;
    dptr = &ptr;

    printf("%p, %d\n", &num, num); //num의 주소, 값 출력

    //ptr 값, ptr의 주소, ptr의 가리키는 주소에 저장된 값(=num) 출력
    printf("%p, %p, %u\n", ptr, &ptr, *ptr);
    
    //dptr 값(=&ptr), dptr의 주소, dptr이 가리키는 주소(ptr)에 저장된 값(=&num),
    //dptr이 가리키는 주소(ptr)가 가리키는 주소에 저장된 값(=num)
    printf("%p, %p, %p, %u", dptr, &dptr, *dptr, **dptr);
}