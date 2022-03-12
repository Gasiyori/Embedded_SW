#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int num = 7;

    ptr = &num;
    printf("%p, %d\n", ptr, *ptr); //스택 영역
    
    ptr = (int *)malloc(sizeof(int)); //ptr에 int크기만큼 메모리 할당

    *ptr = 123;
    printf("%p, %d\n", ptr, *ptr); //힙 영역, 이전에 출력했던 주소값과 다름
    
    free(ptr); //ptr에 할당된 메모리 해제

    return 0;
}