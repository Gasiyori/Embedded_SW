#include <stdio.h>
#include <stdlib.h>

//형변환 이후 증감연산 가능
//캐스팅과 동시에 증감연산자 사용은 Microsoft에 한하여 동작

int main() {
    void* ptr = malloc(20);
    
    printf(" % p\n", ptr);
    printf(" % p\n", (int*)ptr + 1);
    printf(" % p\n", (char*)ptr + 1);
    
    free(ptr);
    
    return 0;
}