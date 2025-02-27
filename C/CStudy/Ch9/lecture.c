#include "lecture.h"

void ShowExample()
{
	int number = 10;
	printf("number의 값 : %d\n", number);

	LocalFunc(10);
	LocalFunc(20);
}

void LocalFunc(int a)
{
	int value = 5;
	printf("a의 값에 5를 더한 값 : %d\n", a + value);
}
