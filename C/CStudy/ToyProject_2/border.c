#include "border.h"

void ShowBorder()
{

	printf("����������������������������������������\n");
	printf("����                 ��\n");
	printf("��                  ��\n");
	printf("��                  ��\n");
	printf("��                  ��\n");
	printf("��                  ��\n");
	printf("��                  ��\n");
	printf("��                  ��\n");
	printf("��                  ��\n");
	printf("����������������������������������������\n");
	printf("���������������������\n");
	printf("�� ��                ��\n");
	printf("��                  ��\n");
	printf("��                  ��\n");
	printf("��                  ��\n");
	printf("��                  ��\n");
	printf("��                  ��\n");
	printf("��                  ��\n");
	printf("���������������������\n");
	printf("Hello, �ȳ�\n");
	printf("Hello, �� ��\n");
	printf("����  ��   ��\n");
	printf("  ��  ���  ��\n");
	printf("  ��   ��  ��\n");


}

#define WIDTH 30  // ���� ����
#define HEIGHT 15 // ���� ����

void drawBoundary() {
	for (int y = 0; y <= HEIGHT; y++) {
		for (int x = 0; x <= WIDTH; x++) {
			if (y == 0 && x == 0)
				printf("��"); // ���� �� �𼭸�
			else if (y == 0 && x == WIDTH)
				printf("��"); // ������ �� �𼭸�
			else if (y == HEIGHT && x == 0)
				printf("��"); // ���� �Ʒ� �𼭸�
			else if (y == HEIGHT && x == WIDTH)
				printf("��"); // ������ �Ʒ� �𼭸�
			else if (y == 0 || y == HEIGHT)
				printf("��"); // ��� �� �ϴ� �׵θ�
			else if (x == 0 || x == WIDTH)
				printf("��"); // �¿� �׵θ�
			else
				printf(" "); // ���� ����
		}
		printf("\n");
	}
}