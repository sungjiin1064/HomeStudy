#include "intro.h"

void IntroMenu()
{
	while (1)
	{

		printf("1_���ӽ���\n");
		printf("2_��������\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			GameLoop();
		}
		else if (inputNumber == 2)
		{
			break;
		}
		else
		{

		}

	}


}
