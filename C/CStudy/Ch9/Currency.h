#pragma once

#include <stdio.h>
#include <stdbool.h>

//extern : �ܺο� CurrentMoney �̸��� ���� ������ ������ �װ��� ����ϼ���.
extern int CurrentMoney;

bool IsEnoughMoney(int amount);

bool UseMoney(int price);
