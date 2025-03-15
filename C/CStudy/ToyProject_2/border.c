#include "border.h"

void ShowBorder()
{

	printf("┌──────────────────┐\n");
	printf("│●                 │\n");
	printf("│                  │\n");
	printf("│                  │\n");
	printf("│                  │\n");
	printf("│                  │\n");
	printf("│                  │\n");
	printf("│                  │\n");
	printf("│                  │\n");
	printf("└──────────────────┘\n");
	printf("■■■■■■■■■■■■■■■■■■■■\n");
	printf("■ ●                ■\n");
	printf("■                  ■\n");
	printf("■                  ■\n");
	printf("■                  ■\n");
	printf("■                  ■\n");
	printf("■                  ■\n");
	printf("■                  ■\n");
	printf("■■■■■■■■■■■■■■■■■■■■\n");
	printf("Hello, 안녕\n");
	printf("Hello, 안 녕\n");
	printf("■■■  ■   ■\n");
	printf("  ■  ■■  ■\n");
	printf("  ■   ■  ■\n");


}

#define WIDTH 30  // 가로 길이
#define HEIGHT 15 // 세로 길이

void drawBoundary() {
	for (int y = 0; y <= HEIGHT; y++) {
		for (int x = 0; x <= WIDTH; x++) {
			if (y == 0 && x == 0)
				printf("┌"); // 왼쪽 위 모서리
			else if (y == 0 && x == WIDTH)
				printf("┐"); // 오른쪽 위 모서리
			else if (y == HEIGHT && x == 0)
				printf("└"); // 왼쪽 아래 모서리
			else if (y == HEIGHT && x == WIDTH)
				printf("┘"); // 오른쪽 아래 모서리
			else if (y == 0 || y == HEIGHT)
				printf("─"); // 상단 및 하단 테두리
			else if (x == 0 || x == WIDTH)
				printf("│"); // 좌우 테두리
			else
				printf(" "); // 내부 공간
		}
		printf("\n");
	}
}