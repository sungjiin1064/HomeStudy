/*
* menu.h ���� �Լ��̸�(SelectMenu)�� ���콺 ��Ŭ�� �����۾� �� �����͸�...Ŭ��(ctrl + .)
* menu.h �ڵ带 ctrl + v �ѰŶ� ����
*/

#include "menu.h"
#pragma once

int attackPower = 0;
int weaponLevel = 1;
int baseattack = 10;
int weight = 5;

void SelectMenu()
{
	while (true)
	{
		//system("cls");
		printf("1_��ȭ�Ѵ�.\n");
		printf("2_����Ѵ�.\n");
		printf("3_�����Ѵ�.\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n'); // character �Է� ����

		if (inputNumber == 1)
		{
			printf("��ȭ�� �����մϴ�.\n");

			// ������ ����
			// ������ �⺻ ���ݷ�
			// ����ġ
			// ���� ���ݷ�

			// ��ȭ�� ������ �����ϴ� case

			//������ ������ 1��� ��ŵ�ϴ�.
			weaponLevel = weaponLevel + 1;
			printf("���ⷹ�� %d\n", weaponLevel);
			//���� ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ
			attackPower = baseattack + weaponLevel * weight;
			//printf(���� ���ݷ�, ����)
			printf("���� ���ݷ� %d, ���� %d\n", attackPower, weaponLevel);

		}
		else if (inputNumber == 2)
		{
			printf("��ȭ�� ����մϴ�.\n");
		}
		else if (inputNumber == 3)
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");
		}

		//�÷��̾ Ư�� Ű�� �Է����� �� �Ѿ���� �ϰ� �ʹ�.

		printf("������ �Ϸ��� �ƹ� Ű�� �Է����ּ���.\n");
		_getch(); // �Է°��� �޾ƿ��� ��ɾ�

	}
}
