#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pos {
    int x,y;
};

int main() {
    void *ptr = malloc(sizeof(struct Pos)*3);

    for(int i=0; i<3; i++) {
        ((struct Pos *)ptr+i)->x = (i+1)*10; //x에 순서대로 10, 20, 30 저장
        ((struct Pos *)ptr+i)->y = (i+4)*10; //y에 순서대로 40, 50, 60 저장
        printf("%d: x = %d, y = %d\n", i, ((struct Pos *)ptr+i)->x, ((struct Pos *)ptr+i)->y);
    }
    
    //포인터가 가리키는 곳보다 x는 1, y는 2만큼 건너뛰어 요소의 값 출력
    printf("%d %d\n", ((struct Pos *)ptr + 1)->x, ((struct Pos *)ptr + 2)->y);
    free(ptr);
    
    return 0;
}