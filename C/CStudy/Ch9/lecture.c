#include "lecture.h"

void ShowExample()
{
	int number = 10;
	printf("number�� �� : %d\n", number);

	LocalFunc(10);
	LocalFunc(20);
}

void LocalFunc(int a)
{
	int value = 5;
	printf("a�� ���� 5�� ���� �� : %d\n", a + value);
}
