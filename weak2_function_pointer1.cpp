#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

int main() {
    int (*fp)(int, int); //함수 포인터 : 반환 형태와 매개변수 형태 지정

    //함수 이름을 함수 포인터에 저장 = 함수 이름은 함수를 가리키는 주소값
    fp = add;
    printf("add = % d\n", fp(15, 20));

    fp = mul; //함수 포인터를 이용해 저장된 함수 변경
    printf("mul = % d\n", fp(15, 20));

    return 0;
}