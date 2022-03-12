#include <stdio.h>

//void pointer. 자료형이 정해지지 않은 포인터
//증감연산 불가, 필요한 경우 형변환
//역참조 불가

//주소값에 의미를 두고 포인터 형을 나중에 결정
int main() {
    int num = 17;
    void *ptr; //주소기만 하면 뭐든 받을 수 있음

    ptr = &num;
    // *ptr = 20; // 오류 : 역참조 불가
    ptr++; // 오류 : 자료형을 몰라서 증감 불가

    return 0;
}