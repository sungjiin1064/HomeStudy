#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int ü��;
    int ���ݷ�;
} Character;

void attack(Character* attacker, Character* defender) {
    defender->ü�� -= attacker->���ݷ�;
    if (defender->ü�� < 0) {
        defender->ü�� = 0;
    }
}

int get_random_money() {
    return (rand() % 51) + 50; // 50���� 100 ������ ������ �ݾ� ����
}

int main() {
    // ���� ���� �����⸦ �ʱ�ȭ�մϴ�.
    srand(time(NULL));

    Character slime1 = { 50, 4 };
    Character slime2 = { 50, 4 };
    Character knight = { 100, 9 };
    int backpack_money = 0;

    while ((slime1.ü�� > 0 || slime2.ü�� > 0) && knight.ü�� > 0) {
        if (slime1.ü�� > 0) {
            attack(&slime1, &knight);
            printf("������1�� �ʺ� ��縦 �����մϴ�: �ʺ� ����� ü�� = %d\n", knight.ü��);
        }

        if (slime2.ü�� > 0) {
            attack(&slime2, &knight);
            printf("������2�� �ʺ� ��縦 �����մϴ�: �ʺ� ����� ü�� = %d\n", knight.ü��);
        }

        if (knight.ü�� == 0) {
            printf("�ʺ� ��簡 ����Ͽ����ϴ�. �����ӵ��� �̰���ϴ�!\n");
            break;
        }

        if (slime1.ü�� > 0) {
            attack(&knight, &slime1);
            printf("�ʺ� ��簡 ������1�� �����մϴ�: ������1�� ü�� = %d\n", slime1.ü��);
            if (slime1.ü�� == 0) {
                int money = get_random_money();
                backpack_money += money;
                printf("������1�� ������ %d���� ����߷Ƚ��ϴ�. ������ �� ��: %d��\n", money, backpack_money);
            }
        }

        if (slime2.ü�� > 0) {
            attack(&knight, &slime2);
            printf("�ʺ� ��簡 ������2�� �����մϴ�: ������2�� ü�� = %d\n", slime2.ü��);
            if (slime2.ü�� == 0) {
                int money = get_random_money();
                backpack_money += money;
                printf("������2�� ������ %d���� ����߷Ƚ��ϴ�. ������ �� ��: %d��\n", money, backpack_money);
            }
        }
    }

    if (knight.ü�� == 0) {
        printf("�ʺ� ��簡 �׾����ϴ�. ������ �� ��: %d��\n", backpack_money);
    }
    else {
        printf("�ʺ� ��簡 �����ӵ��� ��� óġ�߽��ϴ�. ������ �� ��: %d��\n", backpack_money);
    }

    return 0;
}
