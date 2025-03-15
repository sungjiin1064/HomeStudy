#pragma once

#include<stdio.h> // printf
#include<stdbool.h> // true, false
#include<conio.h> // _getch() 입력버퍼없이
#include<Windows.h> // system("cls")
#include<stdlib.h> // rand
#include<time.h> //time()

void ShowMenu();

void Upgrade();
void ShowStatus();

bool IsGameClear();

extern int CurrentLevel;
extern int TargetLevel;
extern bool isClear;