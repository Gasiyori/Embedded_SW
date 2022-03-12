#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//메모리 관련 함수 사용

int main() {
    long *ptr = (long*)malloc(sizeof(long));

    memset(ptr, 0x5A, 4); //ptr이 저장된 메모리를 5A로 초기화
    // memset(ptr, 0x5A, 2); //ptr이 저장된 메모리를 2바이트 만큼 5A로 초기화

    printf("0x %lX\n", *ptr);

    free(ptr);

    return 0;
}