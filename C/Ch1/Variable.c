/*
�ۼ��� : 2025-02-17
�ۼ��� : �ڼ���
��  �� : ����
*/

// 0 ȯ�� ����
#include <stdio.h>

int main()
{
    // player: �г���(���ڿ�) - kk, oo
	// enemy : ���� �̸�(���ڿ�)
	// player's attackpower : �÷��̾��� ���ݷ�(����)
	// enemy's attackpower  : ������ ���ݷ� (����)

	// ������ �̿��ؼ� - �ѹ濡 player�̸��� �ٲپ� ����.
	// ��ǻ�Ϳ��� �����ؾ� �� ����(������ �̸�, ��� �����ΰ�(�ڡڡ�), ��)
	int playerAttackPower;
	int basicPower = 6;
	int weaponPower = 0;
	int growthPower = 2;    

	playerAttackPower = basicPower + weaponPower * growthPower; //���ݷ� = ����(������ ��6) + ������ݷ� * ��ȭ(��ȭ��2))
	//weaponPower = wepon 

	//int playerAttackPower = basicPower + weaponLevel * growthPower;
	int monsterAttackPower = 2;
	int playerHealth = 50;
	int monsterHealth = 10;
	int pH = playerHealth - monsterAttackPower * 1;
	int mH = monsterHealth - playerAttackPower * 1;
	int mH1 = mH - playerAttackPower;
	int mH2 = mH1 - playerAttackPower;
	int pH1 = pH - monsterAttackPower;



	
	
	
	printf("%s�� ���� �������� %s�� �������ϴ�.\n", "�����̾�", "������");
	printf("\n");
	printf("-��������-\n");
	printf("\n");
	printf("%s ü��(%d)   %s ü��(%d)\n", "�����̾�", playerHealth, "������", monsterHealth);
	printf("%s�� ������ ���� %d �������� �־����ϴ�.\n", "�����̾�", playerAttackPower);
	printf("%s�� ü���� %d ���ҽ��ϴ�.\n", "������", mH);
	//printf("%s�� %s�� ���� �����Ͽ� %d�� %d�� �������� �־����ϴ�.\n", "�����̾�", "������", playerAttackPower, monsterAttackPower);
	//printf("%s�� ü���� %d, %s�� ü���� %d�̵Ǿ����ϴ�.\n","�����̾�", pH, "������", mH1);
	printf("%s�� �����Ͽ� %d �������� �־����ϴ�.\n", "������", monsterAttackPower);
	printf("%s�� ü���� %d ���ҽ��ϴ�.\n", "�����̾�", pH);
	printf("%s�� �����Ͽ� %d �������� �־����ϴ�.\n", "�����̾�", playerAttackPower);
	printf("%s�� ü���� %d ���ҽ��ϴ�.\n", "������", mH1);


	// ���� ���̳ʽ��� �ȶ߰� 0�̶߰�. (0�̵Ǹ� ����̶�� �����߰��ϱ�, ����ġ ȹ��)
	printf("���Ͱ� ����ǰ�� ���������ϴ�.\n");
	printf("����ǰ�� ȹ���Ͻðڽ��ϱ�? y or n\n");

	//int width, height, extent;  // y, n �� �ٲٱ�

	//scanf_s("%d", &width);  // n������ ����ǰ ��ȹ���ϰ�!!

	printf("(�ܵ�)*1 (���Ⱝȭ��)*1 �� ȹ���Ͽ����ϴ�.\n");
	printf("\n");
	printf("-��������-\n");
	printf("\n");
	printf("���⸦ ȹ���Ͽ����ϴ�. ���븦 �Ͻðڽ��ϱ�? y or n\n");
	
	//scanf_s("%d", &height);  // y,n ���� �ٲٸ� �ѹ��� �ȵǼ� ���μ��η� ��. ����� �ٲٱ�

	printf("���� ���� ȿ���� ���ݷ��� %d -> %d�ö����ϴ�.\n", 6, 7); //�ܵ����ݷ�1

	printf("��ȭ���� ȹ���Ͽ����ϴ�. ��ȭ�� �Ͻðڽ��ϱ�? y or n\n");

	//scanf_s("%d", &extent);

	int dando = 1;


	printf("-��ȭ��-\n");
	printf("���� �̸� : %s, ���� ��ȭ���� : %d, ���� ���� Ȯ�� : %f\n", "�ܵ�", 0, 100.0 );
	printf("-��ȭ��-\n");
	printf("���� �̸� : %s, ���� ��ȭ���� : %d, ���� ���� Ȯ�� : %f\n", "�ܵ�", 1, 100.0 );
	printf("���� ��ȭ ȿ���� ���ݷ��� %d -> %d�ö����ϴ�.\n", 7, 8); // �ܵ����ݷ� 1 * 2(��ȭ��)

	//playerAttackPower = basicPower + weaponPower * growthPower; //���ݷ� = ����(������ ��6) + ������ݷ� * ��ȭ(��ȭ��2))










}
