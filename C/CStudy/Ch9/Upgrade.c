#include "Upgrade.h"

	int weaponLv = 0;
	int normalLv = 0;
	int advancedLv = 0;


	int baseAp = 10;
	int currentAp = 0;


void ShowUpgradeMenu()
{
	while (true)
	{
		//system("cls");
		printf("1_��ȭ�Ѵ�.\n");
		printf("2_��� ���ü� �̿�.\n");
		printf("3_��ȭ�� ����Ѵ�.\n");

		int inputnumber = 0;

		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');

		if (inputnumber == 1)
		{

			WeaponUpgrade();
		}
		else if (inputnumber ==2)
		{
			AdvancedWeaponUpgrade();
		}
		else if (inputnumber == 3)
		{
			printf("��ȭ�� ����Ѵ�.\n");
			break;
		}
		else
		{
			printf("�߸��� �Է°�/n\n");
		}
	}


}

void WeaponUpgrade()
{
	int weight = 5;

	normalLv = normalLv + 1;
	currentAp = currentAp +baseAp + weight * weaponLv;
	weaponLv = normalLv + advancedLv;

	printf("���� ���� ���� : %d,���� ���� ���ݷ� : %d\n", weaponLv, currentAp);
}

void AdvancedWeaponUpgrade()
{
	int weight = 10;

	advancedLv = advancedLv + 1;
	currentAp = currentAp +baseAp + weight * weaponLv;
	weaponLv = normalLv + advancedLv;

	printf("���� ���� ���� : %d,���� ���� ���ݷ� : %d\n", weaponLv, currentAp);

}
