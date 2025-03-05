#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> // Sleep �Լ� ���

#define WIDTH 20 // ���� ȭ���� �ʺ�

typedef struct {
    int x;
    int y;
    int health;
    int attack;
} Character;

void clear_screen() {
    system("cls"); // ȭ���� ����� ��� (Windows ȯ��)
}

void print_screen(Character hero, Character monster, int phase) {
    for (int i = 0; i < WIDTH; i++) {
        if (i == hero.x) {
            if (phase % 2 == 0) {
                printf("(  '' )/ ");
            }
            else {
                printf("(  '' )��");
            }
        }
        else if (i == monster.x) {
            if (phase % 2 == 0) {
                printf(" \\( ''  )");
            }
            else {
                printf(" ==( ''  )");
            }
        }
        else {
            printf(" "); // �� ����
        }
    }
    printf("\n");
}

void attack(Character* attacker, Character* defender) {
    defender->health -= attacker->attack;
    if (defender->health < 0) {
        defender->health = 0;
    }
}

int drop_gold() {
    return rand() % 51 + 50; // 50���� 100 ������ ���� ���� ��ȯ
}

void init_monster(Character* monster) {
    monster->x = 5; // �ʱ� ��ġ�� ĳ���ͷκ��� 5���� ������ ������ ����
    monster->y = 0;
    monster->health = 50; // ü�� 50
    monster->attack = 3; // ���ݷ� 3
}

int main() {
    srand(time(NULL)); // ���� ���� �����⸦ �ʱ�ȭ�մϴ�.

    Character hero = { 0, 0, 200, 9 }; // ���ʿ� ������ ĳ���� (ü�� 200, ���ݷ� 9)
    Character monster;
    int gold = 0;
    int phase = 0;
    char choice;

    printf("���� ����! ĳ����(H)�� ���ʿ� �����Ǿ� �ְ�, ����(M)�� �����ʿ��� �ٰ��ɴϴ�.\n");

    while (hero.health > 0) {
        // ���� �ʱ�ȭ
        init_monster(&monster);
        printf("���ο� ���� ����!\n");

        while (monster.health > 0 && hero.health > 0) {
            clear_screen();
            print_screen(hero, monster, phase);
            phase++;

            // ���Ͱ� �� ĭ�� �̵��մϴ�.
            if (monster.x > hero.x + 1) {
                monster.x -= 1;
            }

            printf("���Ͱ� �ٰ����� �ֽ��ϴ�... �Ÿ�: %d\n", monster.x - hero.x);

            // ���Ͱ� ĳ���Ϳ� 1���� �տ� �������� �� �����մϴ�.
            if (monster.x == hero.x + 1) {
                while (hero.health > 0 && monster.health > 0) {
                    clear_screen();
                    print_screen(hero, monster, phase);
                    phase++;

                    printf("���Ͱ� ĳ���͸� �����մϴ�!\n");
                    attack(&monster, &hero);
                    printf("�ɸ��� ü��: %d | ���� ü��: %d\n", hero.health, monster.health);

                    if (hero.health > 0) {
                        printf("ĳ���Ͱ� ���͸� �ݰ��մϴ�!\n");
                        attack(&hero, &monster);
                        printf("�ɸ��� ü��: %d | ���� ü��: %d\n", hero.health, monster.health);
                    }

                    // ���� �ִϸ��̼��� ���� ��� ����մϴ�.
                    Sleep(500); // 0.5�� ��� (Windows)
                }

                // �� ���� ���� �� ��� ����մϴ�.
                Sleep(1000); // 1�� ��� (Windows)
            }
            // �����̴� �ִϸ��̼��� ���� ��� ����մϴ�.
            Sleep(500); // 0.5�� ��� (Windows)
        }

        if (hero.health <= 0) {
            printf("ĳ���Ͱ� ����Ͽ����ϴ�. ���� ����!\n");
            break;
        }

        if (monster.health <= 0) {
            int dropped_gold = drop_gold();
            gold += dropped_gold;
            printf("���Ͱ� ����Ͽ����ϴ�. %d ��ȭ�� ����߷Ƚ��ϴ�!\n", dropped_gold);
            printf("���� ���濡 �ִ� ��ȭ: %d\n", gold);
            Sleep(1000); // 1�� ��� (Windows)
        }

        if (hero.health > 0 && hero.health <= (int)(0.3 * 200)) { // 30% ������ ���
            printf("ü���� 30%% �����Դϴ�. ���� �������� �̵��Ͻðڽ��ϱ�? (y/n): ");
            scanf_s(" %c", &choice, 1);

            if (choice == 'y' || choice == 'Y') {
                while (hero.health < 200) { // �ִ� ü�¿� ������ ������ �籸�� ����
                    printf("���� �������� �̵��մϴ�. ���� ������ �����Ͻðڽ��ϱ�? (100 ���) (y/n): ");
                    scanf_s(" %c", &choice, 1);

                    if (choice == 'y' || choice == 'Y') {
                        if (gold >= 100) {
                            gold -= 100;
                            hero.health += 100;
                            if (hero.health > 200) { // ü���� �ִ� ü���� ���� �ʵ��� �մϴ�.
                                hero.health = 200;
                            }
                            printf("���� ������ �����߽��ϴ�. ü���� 100 ȸ���˴ϴ�. ���� ü��: %d\n", hero.health);
                        }
                        else {
                            printf("��ȭ�� �����մϴ�. ����� ��� �����մϴ�.\n");
                            break;
                        }
                    }
                    else {
                        break;
                    }
                }
            }
        }

        if (hero.health == 0) {
            printf("ĳ���Ͱ� ����Ͽ����ϴ�. ���� ����!\n");
            break;
        }

        printf("��� ����� �Ͻðڽ��ϱ�? (y/n): ");
        scanf_s(" %c", &choice, 1);

        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    printf("������ �����մϴ�. ���� ��ȭ: %d\n", gold);

    return 0;
}
