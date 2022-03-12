#include <stdio.h>
#include <stdlib.h>

int *add(int a, int b) {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = a + b;
    printf("addr = %p\n", ptr); //출력되는 주소는 힙 영역의 주소

    return ptr;
}

int main() {
    int *ptr;
    ptr = add(7, 8);

    printf("%d\n", *ptr);

    free(ptr);

    return 0;
}