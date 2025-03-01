#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAP_SIZE 10 // 맵의 크기
#define BACTERIA_A 'A' // 왼쪽 상단의 세균
#define BACTERIA_B 'B' // 오른쪽 하단의 세균
#define EMPTY '.'

char map[MAP_SIZE][MAP_SIZE];

// 맵 초기화 함수
void initMap() {
    for (int i = 0; i < MAP_SIZE; i++) {
        for (int j = 0; j < MAP_SIZE; j++) {
            map[i][j] = EMPTY;
        }
    }
}

// 초기 세균 생성 함수
void spawnBacteria() {
    map[0][0] = BACTERIA_A; // 왼쪽 상단에 세균 A 생성
    map[MAP_SIZE - 1][MAP_SIZE - 1] = BACTERIA_B; // 오른쪽 하단에 세균 B 생성
}

// 맵 출력 함수
void printMap() {
    for (int i = 0; i < MAP_SIZE; i++) {
        for (int j = 0; j < MAP_SIZE; j++) {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }
}

// 메인 함수
int main() {
    srand(time(0));
    initMap();
    spawnBacteria();
    printMap();
    return 0;
}
