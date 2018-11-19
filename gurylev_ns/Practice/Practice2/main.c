#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define N 10

void main()
{
	setlocale(LC_CTYPE, "rus");
	
	int n, x, i, j, cow = 0, bull = 0;
	int a[N], b[N];
	srand(time(NULL));
	printf("Добро пожаловать в игру БЫКИ И КОРОВЫ\n");

