#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> // Sleep 함수 사용

#define WIDTH 20 // 게임 화면의 너비

typedef struct {
    int x;
    int y;
    int health;
    int attack;
} Character;

void clear_screen() {
    system("cls"); // 화면을 지우는 명령 (Windows 환경)
}

void print_screen(Character hero, Character monster, int phase) {
    for (int i = 0; i < WIDTH; i++) {
        if (i == hero.x) {
            if (phase % 2 == 0) {
                printf("(  '' )/ ");
            }
            else {
                printf("(  '' )ㅡ");
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
            printf(" "); // 빈 공간
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
    return rand() % 51 + 50; // 50에서 100 사이의 랜덤 숫자 반환
}

void init_monster(Character* monster) {
    monster->x = 5; // 초기 위치를 캐릭터로부터 5미터 떨어진 곳으로 설정
    monster->y = 0;
    monster->health = 50; // 체력 50
    monster->attack = 3; // 공격력 3
}

int main() {
    srand(time(NULL)); // 랜덤 숫자 생성기를 초기화합니다.

    Character hero = { 0, 0, 200, 9 }; // 왼쪽에 고정된 캐릭터 (체력 200, 공격력 9)
    Character monster;
    int gold = 0;
    int phase = 0;
    char choice;

    printf("전투 시작! 캐릭터(H)는 왼쪽에 고정되어 있고, 몬스터(M)는 오른쪽에서 다가옵니다.\n");

    while (hero.health > 0) {
        // 몬스터 초기화
        init_monster(&monster);
        printf("새로운 몬스터 등장!\n");

        while (monster.health > 0 && hero.health > 0) {
            clear_screen();
            print_screen(hero, monster, phase);
            phase++;

            // 몬스터가 한 칸씩 이동합니다.
            if (monster.x > hero.x + 1) {
                monster.x -= 1;
            }

            printf("몬스터가 다가오고 있습니다... 거리: %d\n", monster.x - hero.x);

            // 몬스터가 캐릭터와 1미터 앞에 도달했을 때 공격합니다.
            if (monster.x == hero.x + 1) {
                while (hero.health > 0 && monster.health > 0) {
                    clear_screen();
                    print_screen(hero, monster, phase);
                    phase++;

                    printf("몬스터가 캐릭터를 공격합니다!\n");
                    attack(&monster, &hero);
                    printf("케릭터 체력: %d | 몬스터 체력: %d\n", hero.health, monster.health);

                    if (hero.health > 0) {
                        printf("캐릭터가 몬스터를 반격합니다!\n");
                        attack(&hero, &monster);
                        printf("케릭터 체력: %d | 몬스터 체력: %d\n", hero.health, monster.health);
                    }

                    // 전투 애니메이션을 위해 잠시 대기합니다.
                    Sleep(500); // 0.5초 대기 (Windows)
                }

                // 한 턴이 끝난 후 잠시 대기합니다.
                Sleep(1000); // 1초 대기 (Windows)
            }
            // 움직이는 애니메이션을 위해 잠시 대기합니다.
            Sleep(500); // 0.5초 대기 (Windows)
        }

        if (hero.health <= 0) {
            printf("캐릭터가 사망하였습니다. 게임 오버!\n");
            break;
        }

        if (monster.health <= 0) {
            int dropped_gold = drop_gold();
            gold += dropped_gold;
            printf("몬스터가 사망하였습니다. %d 금화를 떨어뜨렸습니다!\n", dropped_gold);
            printf("현재 가방에 있는 금화: %d\n", gold);
            Sleep(1000); // 1초 대기 (Windows)
        }

        if (hero.health > 0 && hero.health <= (int)(0.3 * 200)) { // 30% 이하인 경우
            printf("체력이 30%% 이하입니다. 물약 상점으로 이동하시겠습니까? (y/n): ");
            scanf_s(" %c", &choice, 1);

            if (choice == 'y' || choice == 'Y') {
                while (hero.health < 200) { // 최대 체력에 도달할 때까지 재구매 가능
                    printf("물약 상점으로 이동합니다. 붉은 포션을 구입하시겠습니까? (100 골드) (y/n): ");
                    scanf_s(" %c", &choice, 1);

                    if (choice == 'y' || choice == 'Y') {
                        if (gold >= 100) {
                            gold -= 100;
                            hero.health += 100;
                            if (hero.health > 200) { // 체력이 최대 체력을 넘지 않도록 합니다.
                                hero.health = 200;
                            }
                            printf("붉은 포션을 구입했습니다. 체력이 100 회복됩니다. 현재 체력: %d\n", hero.health);
                        }
                        else {
                            printf("금화가 부족합니다. 사냥을 계속 진행합니다.\n");
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
            printf("캐릭터가 사망하였습니다. 게임 오버!\n");
            break;
        }

        printf("계속 사냥을 하시겠습니까? (y/n): ");
        scanf_s(" %c", &choice, 1);

        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    printf("게임을 종료합니다. 최종 금화: %d\n", gold);

    return 0;
}
