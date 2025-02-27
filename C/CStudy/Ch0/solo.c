#include <stdio.h>

int main() {
    int pH = 100;
    int mH = 50;

    while (pH > 0) 
    {
        printf("%d\n", pH);
        pH -= 6;
   
    }

    // 마지막 케릭터가 사망하였습니다 출력
    printf("케릭터가 사망하였습니다.\n");

    return 0;
}
