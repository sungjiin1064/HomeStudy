#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int 체력;
    int 공격력;
} Character;

void attack(Character* attacker, Character* defender) {
    defender->체력 -= attacker->공격력;
    if (defender->체력 < 0) {
        defender->체력 = 0;
    }
}

int get_random_money() {
    return (rand() % 51) + 50; // 50에서 100 사이의 랜덤한 금액 생성
}

int main() {
    // 랜덤 숫자 생성기를 초기화합니다.
    srand(time(NULL));

    Character slime1 = { 50, 4 };
    Character slime2 = { 50, 4 };
    Character knight = { 100, 9 };
    int backpack_money = 0;

    while ((slime1.체력 > 0 || slime2.체력 > 0) && knight.체력 > 0) {
        if (slime1.체력 > 0) {
            attack(&slime1, &knight);
            printf("슬라임1이 초보 기사를 공격합니다: 초보 기사의 체력 = %d\n", knight.체력);
        }

        if (slime2.체력 > 0) {
            attack(&slime2, &knight);
            printf("슬라임2가 초보 기사를 공격합니다: 초보 기사의 체력 = %d\n", knight.체력);
        }

        if (knight.체력 == 0) {
            printf("초보 기사가 사망하였습니다. 슬라임들이 이겼습니다!\n");
            break;
        }

        if (slime1.체력 > 0) {
            attack(&knight, &slime1);
            printf("초보 기사가 슬라임1을 공격합니다: 슬라임1의 체력 = %d\n", slime1.체력);
            if (slime1.체력 == 0) {
                int money = get_random_money();
                backpack_money += money;
                printf("슬라임1이 죽으며 %d원을 떨어뜨렸습니다. 가방의 총 돈: %d원\n", money, backpack_money);
            }
        }

        if (slime2.체력 > 0) {
            attack(&knight, &slime2);
            printf("초보 기사가 슬라임2를 공격합니다: 슬라임2의 체력 = %d\n", slime2.체력);
            if (slime2.체력 == 0) {
                int money = get_random_money();
                backpack_money += money;
                printf("슬라임2가 죽으며 %d원을 떨어뜨렸습니다. 가방의 총 돈: %d원\n", money, backpack_money);
            }
        }
    }

    if (knight.체력 == 0) {
        printf("초보 기사가 죽었습니다. 가방의 총 돈: %d원\n", backpack_money);
    }
    else {
        printf("초보 기사가 슬라임들을 모두 처치했습니다. 가방의 총 돈: %d원\n", backpack_money);
    }

    return 0;
}
