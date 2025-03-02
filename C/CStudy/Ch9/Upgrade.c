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
		printf("1_강화한다.\n");
		printf("2_고급 제련소 이용.\n");
		printf("3_강화를 취소한다.\n");

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
			printf("강화를 취소한다.\n");
			break;
		}
		else
		{
			printf("잘못된 입력값/n\n");
		}
	}


}

void WeaponUpgrade()
{
	int weight = 5;

	normalLv = normalLv + 1;
	currentAp = currentAp +baseAp + weight * weaponLv;
	weaponLv = normalLv + advancedLv;

	printf("현제 무기 레벨 : %d,현제 무기 공격력 : %d\n", weaponLv, currentAp);
}

void AdvancedWeaponUpgrade()
{
	int weight = 10;

	advancedLv = advancedLv + 1;
	currentAp = currentAp +baseAp + weight * weaponLv;
	weaponLv = normalLv + advancedLv;

	printf("현제 무기 레벨 : %d,현제 무기 공격력 : %d\n", weaponLv, currentAp);

}
