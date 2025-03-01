#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAP_SIZE 10 // ���� ũ��
#define BACTERIA_A 'A' // ���� ����� ����
#define BACTERIA_B 'B' // ������ �ϴ��� ����
#define EMPTY '.'

char map[MAP_SIZE][MAP_SIZE];

// �� �ʱ�ȭ �Լ�
void initMap() {
    for (int i = 0; i < MAP_SIZE; i++) {
        for (int j = 0; j < MAP_SIZE; j++) {
            map[i][j] = EMPTY;
        }
    }
}

// �ʱ� ���� ���� �Լ�
void spawnBacteria() {
    map[0][0] = BACTERIA_A; // ���� ��ܿ� ���� A ����
    map[MAP_SIZE - 1][MAP_SIZE - 1] = BACTERIA_B; // ������ �ϴܿ� ���� B ����
}

// �� ��� �Լ�
void printMap() {
    for (int i = 0; i < MAP_SIZE; i++) {
        for (int j = 0; j < MAP_SIZE; j++) {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }
}

// ���� �Լ�
int main() {
    srand(time(0));
    initMap();
    spawnBacteria();
    printMap();
    return 0;
}
